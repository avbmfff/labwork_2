#include "sq_pol.h"
#include <iostream>
using namespace std;

sq_pol::sq_pol(const float &a, const float &b, const float &c) {
    this->a = a;
    this->b = b;
    this->c = c;
    }

sq_pol::sq_pol(void)
{
	static int a = 0;
	static int  b = 0;
	static int c = 0;
}

sq_pol::sq_pol(float a0, float b0, float c0)
{
	static int a = a0;
	static int b = b0;
	static int c = c0;

}

sq_pol::sq_pol(const sq_pol& ref_sq_pol)
{
	static int a = ref_sq_pol.a;
	static int b = ref_sq_pol.b;
	static int c = ref_sq_pol.c;
}

sq_pol::~sq_pol() = default;

void sq_pol::inx0(float x0)
{
	std::cout << "Answer is " << x0 * x0 * a + x0 * b + c;
}

int sq_pol::numb_roots()
{
	if ((b * b - 4 * a * c) < 0) return 0;
	else if ((b * b - 4 * a * c) == 0) return 1;
	else if ((b * b - 4 * a * c) > 0) return 2;
}

void sq_pol::find_roots()
{
	float D = b * b - 4 * a * c;
	if (D < 0) std::cout << "No roots" << std::endl;
	if (D == 0)
	{
		std::cout << "x = " << -b / (2 * a) << std::endl;
	}
	if (D > 0)
	{
		std::cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << std::endl;
		std::cout << "x1 = " << (-b - sqrt(D)) / (2 * a) << std::endl;
	}
}

void sq_pol::maxmin()
{
	float D = b * b - 4 * a * c;
	if (D < 0) std::cout << "No max and min" << std::endl;
	if (D == 0)
	{
		if ((-b / (2 * a) - 1) < 0)
			std::cout << "Min is " << -b / (2 * a) << std::endl;
		else std::cout << "Max is " << -b / (2 * a) << std::endl;
	}
	if (D > 0)
	{
		if (((-b + sqrt(D)) / (2 * a) - 1) < 0 && ((-b + sqrt(D)) / (2 * a) + 1) > 0)
		{
			std::cout << "Min is " << (-b + sqrt(D)) / (2 * a) << std::endl;
			std::cout << "Max is " << (-b - sqrt(D)) / (2 * a) << std::endl;
		}
		else
		{
			std::cout << "Min is " << (-b - sqrt(D)) / (2 * a) << std::endl;
			std::cout << "Max is " << (-b + sqrt(D)) / (2 * a) << std::endl;
		}
	}

}

void sq_pol::print()
{
    std::cout<<"("<<a<<")"<<"x^2 + ("<<b<<")x +"<<"("<<c<<")"<<std::endl;
}


