#ifndef __RPN_HPP__
#define __RPN_HPP__

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>


class RPN
{
    private:
        std::stack<double> _stack;
        void error(int stackSize);
    public:
        RPN();
        ~RPN();
        void run(std::string &line);
};


#endif