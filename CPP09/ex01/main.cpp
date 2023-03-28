#include "RPN.hpp"

void parseLine(std::string &line)
{
    for (size_t i = 0; i < line.size(); i++)
    {
        if (!isdigit(line[i]) && line[i] != ' ' && line[i] != '+' &&\
             line[i] != '-' && line[i] != '*' && line[i] != '/')
        {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
    }
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " Not the correct arguments" << std::endl;
        return 1;
    }
    std::string  line = argv[1];
    //parseLine(line);
    RPN rpn;
    rpn.run(line);
    return 0;
}