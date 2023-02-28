#include "Harl.hpp"

int main(void) {
	Harl	harl;
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("info");
	harl.complain("error");
	harl.complain("eror");
	return 0;
}