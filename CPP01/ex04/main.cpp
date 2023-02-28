#include <_stdio.h>
#include <fstream>
#include <iostream>
#include <regex>
#include <string>

std::string sanitizer(std::string input) {
  std::regex special_chars("[.^$|()\\[\\]{}*+?\\\\]");
  std::string sanitized = std::regex_replace(input, special_chars, "\\$&");
  return (sanitized);
}
int main(int ac, char **av) {
  if (ac != 4) {
    std::cout << "args error : <filename> <s1> <s2>" << std::endl;
    return 0;
  }
  std::string replaced;
  std::ifstream Myfile(av[1]);
  if (Myfile.is_open() == false)
    exit(1);
  std::ofstream Myfile_replace(std::string(av[1]) + ".replace");
  if (Myfile_replace.is_open() == false)
    exit(1);
  std::string line;
  getline(Myfile, line, '\0');
  replaced = std::regex_replace(line, std::regex(sanitizer(av[2])), av[3]);
  Myfile_replace << replaced;
  Myfile_replace.close();
  Myfile.close();
  return 0;
}