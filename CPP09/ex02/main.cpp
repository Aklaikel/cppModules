#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::cout << "Usage: " << argv[0] << " Not the correct arguments" << std::endl;
        return 1;
    }
    PmergeMe pmergeMe;
    pmergeMe.run(argv);
    return 0;
}