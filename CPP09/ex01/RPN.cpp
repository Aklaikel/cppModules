#include"RPN.hpp"

RPN::RPN()
{
}
RPN::~RPN()
{
}

void RPN::error(int stackSize)
{
    if (stackSize < 2)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
}


void RPN::run(std::string &line) {
    std::stringstream ss(line);
    char token;
    std::string number;

    while (!ss.eof()) {
        ss.get(token);
        if (token == ' ')
            continue;
        if (isdigit(token)) {
            char *ptr;
            number = token;
            _stack.push(std::strtod(number.c_str(), &ptr));
        } else {
            if (ss.eof())
                break;
            double value1;
            double value2;
            switch (token) {
                case '+':
                    error(_stack.size());
                    value1 = _stack.top();
                    _stack.pop();
                    value2 = _stack.top();
                    _stack.pop();
                    _stack.push(value1 + value2);
                    break;
                case '-':
                    error(_stack.size());
                    value1 = _stack.top();
                    _stack.pop();
                    value2 = _stack.top();
                    _stack.pop();
                    _stack.push(value2 - value1);
                    break;
                case '*':
                    error(_stack.size());
                    value1 = _stack.top();
                    _stack.pop();
                    value2 = _stack.top();
                    _stack.pop();
                    _stack.push(value1 * value2);
                    break;
                case '/':
                    error(_stack.size());
                    value1 = _stack.top();
                    _stack.pop();
                    value2 = _stack.top();
                    _stack.pop();
                    if (value1 == 0)
                    {
                        std::cerr << "Error: division by zero" << std::endl;
                        exit(1);
                    }
                    _stack.push(value2 / value1);
                    break;
                default:
                    std::cerr << "Error" << std::endl;
                    exit(1);
            }
        }
    }
    if (_stack.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    std::cout << _stack.top() << std::endl;
}