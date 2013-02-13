#include <dune/hello/hello.hpp>

#include <iostream>

int
Dune::Hello::Hello::operator() () {
	std::cout << "Hello, World!" << std::endl;
	return 42;
}
