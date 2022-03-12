#ifndef SQ_POL_H
#define SQ_POL_H
#include <string>
#include <cmath>

class sq_pol
{
public:
	sq_pol(void);
	sq_pol(const sq_pol& ref_sq_pol);
	sq_pol(float a0, float b0, float c0);
	explicit sq_pol(const float& a, const float& b, const float& c);
	~sq_pol();

	static void inx0(float x0);
	static void find_roots();
	static int numb_roots();
	static void maxmin();
	static void print();


private:
    static float a;
	static float b;
	static float c;

};

#endif // SQ_POL_H
