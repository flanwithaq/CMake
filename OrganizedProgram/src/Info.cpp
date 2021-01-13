#include "Info.h"
#include <iostream>

Info::Info() {
	data = 5;
}

void Info::printData() {
	std::cout << "data: " << data << std::endl;
}

