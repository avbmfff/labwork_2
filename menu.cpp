#include "sq_pol.h"
#include "menu.h"
#include <iostream>
using namespace std;

menu::menu() = default;
menu::~menu() = default;

void menu::menupr() {
	std::cout << "1 is value at point x0" << std::endl;
	std::cout << "2 is number of roots" << std::endl;
	std::cout << "3 is finding roots" << std::endl;
	std::cout << "4 is finding max and min" << std::endl;
	std::cout << "5 is output on display" << std::endl;
	std::cout << "Number of function: ";
}

void menu::start() {
	menupr();

	switch (getchar()) {
	    float a, b, c;
		std::cout << "coefficient a, b and c:";
		cin >> a >> b >> c;

	case '1': {
		getchar();
		float x0;
		std::cout << "x0 = ";
		std::cin >> x0;
		sq_pol::inx0(x0);
		break;
	}
	case '2': {
		getchar();
		std::cout << sq_pol::numb_roots() << std::endl;
		break;
	}
	case '3': {
		getchar();
		sq_pol::find_roots();
		break;
	}
	case '4': {
		getchar();
		sq_pol::maxmin();
		break;
	}
	case '5': {
		getchar();
        sq_pol::print();
		break;
	}
	}
}
