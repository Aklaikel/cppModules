#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <cstdio>

class PmergeMe
{
    private:
        std::vector<int> _print;
        std::vector<int> _v;
        std::deque<int> _d;
        void error();
        void parseArgsVector(char **argv);
        void parseArgsDeque(char **argv);
        void mergeinsertSortVector(std::vector<int> &v);
        void mergeinsertSortDeque(std::deque<int> &d);
        void runVector(char **argv);
        void runDeque(char **argv);
        void printVector(std::vector<int> v);
        void printDeque(std::deque<int> d);
        void printBeforeAndAfter(char **argv);
    public:
        PmergeMe();
        ~PmergeMe();
        void run(char **argv);
};

void PmergeMe::error()
{
    std::cerr << "Error" << std::endl;
    exit(1);
}

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}



void PmergeMe::parseArgsVector(char **argv)
{
    for (size_t i = 1; argv[i]; i++)
        _v.push_back(atoi(argv[i]));  
}

void PmergeMe::parseArgsDeque(char **argv)
{
    for (size_t i = 1; argv[i]; i++)
        _d.push_back(atoi(argv[i]));
}

void PmergeMe::mergeinsertSortVector(std::vector<int> &v)
{
    for (size_t i = 1; i < v.size(); i++)
    {
        int j = i;
        while (j > 0 && v[j] < v[j - 1])
        {
            int tmp = v[j];
            v[j] = v[j - 1];
            v[j - 1] = tmp;
            j--;
        }
    }
}


void PmergeMe::mergeinsertSortDeque(std::deque<int> &d)
{
    for (size_t i = 1; i < d.size(); i++)
    {
        int j = i;
        while (j > 0 && d[j] < d[j - 1])
        {
            int tmp = d[j];
            d[j] = d[j - 1];
            d[j - 1] = tmp;
            j--;
        }
    }
}

void PmergeMe::runVector(char **argv)
{

    parseArgsVector(argv);
    mergeinsertSortVector(_v);
}

void PmergeMe::runDeque(char **argv)
{
    parseArgsDeque(argv);
    mergeinsertSortDeque(_d);
}

void PmergeMe::printVector(std::vector<int> v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        if (i != 0)
            std::cout << " ";
        std::cout << v[i];
    }
    std::cout << std::endl;
}

void PmergeMe::printDeque(std::deque<int> d)
{
    for (size_t i = 0; i < d.size(); i++)
    {
        if (i != 0)
            std::cout << " ";
        std::cout << d[i];
    }
    std::cout << std::endl;
}

void PmergeMe::printBeforeAndAfter(char **argv)
{
    for (size_t i = 1; argv[i]; i++)
    {
        std::string number = argv[i];
        for (size_t j = 0; j < number.size(); j++)
        {
            if (!isdigit(number[j]))
                error();
        }
        _print.push_back(atoi(argv[i]));
    }
    std::cout << "Before: ";
    printVector(_print);
    std::cout << "After: ";
    mergeinsertSortVector(_print);
    printVector(_print);
}

void PmergeMe::run(char **argv)
{
    printBeforeAndAfter(argv);
    double timeTakenVector = 0;
    double timeTakenDeque = 0;
    clock_t start, end;
    start = clock();
    runVector(argv);
    end = clock();
    timeTakenVector = (double)(end - start) / (double)CLOCKS_PER_SEC;
    start = clock();
    runDeque(argv);
    end = clock();
    timeTakenDeque = (double)(end - start) / (double)CLOCKS_PER_SEC;
    std::cout << "Time to process a range of   " << _v.size() << " elements with std::vector: ";
    printf("%f", timeTakenVector);
    std::cout << " us" << std::endl;
    std::cout << "Time to process a range of   " << _d.size() << " elements with std::deque: ";
    printf("%f", timeTakenDeque);
    std::cout << " us" << std::endl;
}


#endif