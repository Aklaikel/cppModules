#include "BitcoinExchange.hpp"

static void ltrim(std::string &value, const std::string &sep)
{
    std::string::iterator it = value.begin();
    while (it != value.end() && ::strchr(sep.c_str(), *it))
        it++;
    value.erase(value.begin(), it);
}

static void rtrim(std::string &value, const std::string &sep)
{
    std::string::reverse_iterator it = value.rbegin();
    while (it != value.rend() && ::strchr(sep.c_str(), *it))
        it++;
    value.erase(value.length() - (it - value.rbegin()));
}

void BitcoinExchange::trim(std::string &value, const std::string &sep)
{
    ltrim(value, sep);
    rtrim(value, sep);
}

template <typename T, typename Func>
bool every(T data, Func _func)
{
    typedef typename T::iterator Iter;

    for (Iter it = data.begin(); it != data.end(); it++)
        if (!_func(*it))
            return false;
    return true;
}

void BitcoinExchange::opencsv()
{
    std::ifstream file("data.csv");
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date;
        std::string value;
        std::getline(ss, date, ',');
        trim(date, " ");
        std::getline(ss, value, '\0');
        trim(value, " ");
        _btc[date] = atof(value.c_str());
    }
}

int BitcoinExchange::dateCheck(std::string date)
{
    std::stringstream ss(date);
    std::string year;
    std::string month;
    std::string day;
    getline(ss, year, '-');
    getline(ss, month, '-');
    getline(ss, day, '\0');
    if (year.length() != 4 || month.length() != 2 || day.length() != 2)
        return 1;
    if (every(year, ::isdigit) == false || every(month, ::isdigit) == false || every(day, ::isdigit) == false)
        return 1;
    if (atoi(year.c_str()) < 0 || atoi(month.c_str()) < 0 || atoi(day.c_str()) < 0)
        return 1;
    if (atoi(year.c_str()) > 9999 || atoi(month.c_str()) > 12 || atoi(day.c_str()) > 31)
        return 1;
    if ((atoi(month.c_str()) == 4 || atoi(month.c_str()) == 6 || atoi(month.c_str()) == 9 || atoi(month.c_str()) == 11) && atoi(day.c_str()) > 30)
        return 1;
    if (atoi(year.c_str()) % 4 == 0 && atoi(month.c_str()) == 2 && atoi(day.c_str()) > 29)
        return 1;
    if (atoi(year.c_str()) % 100 == 0 && atoi(year.c_str()) % 400 != 0 && atoi(month.c_str()) == 2 && atoi(day.c_str()) > 28)
        return 1;
    return 0;
}

BitcoinExchange::BitcoinExchange(/* args */)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string, double> BitcoinExchange::getBtc()
{
    return _btc;
}

void BitcoinExchange::run(std::istream &in)
{
    std::string line;
    std::getline(in, line);

    while (std::getline(in, line))
    {
        if (line.find("|") == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::stringstream ss(line);
        std::string date;
        std::string value;
        std::getline(ss, date, '|');
        trim(date, " ");
        std::getline(ss, value, '\0');
        trim(value, " ");
        if (dateCheck(date) == 1)
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        char *ptr;
        double value_d = strtof(value.c_str(), &ptr);
        if (*ptr != '\0')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (value_d < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value_d > INT_MAX)
        {
            std::cerr << "Error: too large number." << std::endl;
            continue;
        }
        std::map<std::string, double>::iterator it = _btc.upper_bound(date);
        if (it != _btc.end())
        {
            it--;
            if (it == _btc.begin())
            {
                std::cout << "Error: no data for this date." << std::endl;
                continue;
            }
            std::cout << date << " => " << value_d << " = " << value_d * it->second << std::endl;         
        }
        else
        {
            std::cout << "Error: no data for this date." << std::endl;
            continue;
        }   
    }
}
