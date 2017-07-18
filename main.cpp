#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <string>
#include <iostream>

#include "cmake-build/CMakeTutorialConfig.h"

#define THIS_IS_SOMETHING 10

// Following the tutorial: https://cmake.org/cmake-tutorial/
int main(int argc, char *argv[]) {
	using namespace std;
	if (argc < 2) {
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return 1;
	}
	double inputVal = atof(argv[1]);
	double outVal = sqrt(inputVal);
	std::cout << "The square root of " << inputVal << " is " << outVal << std::endl;
	return 0;
}
