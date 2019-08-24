#include <iostream>
#include "src/vector.h"

int main() {
	std::cout << "Hello, world!" << std::endl;
	std::cout << "This is the math test suite." << std::endl;

	int x = 9;
	int y = 10;

	Vector<int> *myVect = new Vector<int>(4);
	std::cout << myVect << std::endl;

	std::cout << x << " + " << y << " = " << x+y << std::endl;
	return 0;
}
