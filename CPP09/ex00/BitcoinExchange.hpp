#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <fstream>
#include<limits.h>
#include <stdlib.h>
#include <cstring>


#define NOT_POSITIVE_INT (1 << 0)
#define BAD_INPUT (1 << 1)
#define TOO_LARGE_INT (1 << 2)

class BitcoinExchange
{
private:
    std::map<std::string, double> _btc;
    int dateCheck(std::string date);
    void trim(std::string &value, const std::string &sep);
public:
    BitcoinExchange(/* args */);
    ~BitcoinExchange();
    void opencsv();
    void run(std::istream &in);
    std::map<std::string, double> getBtc();
};

