#include <iostream>

struct Complex
{
	float real;
	float imag;
};

int main()
{
	std::cout<<"Sizeof Float:" << sizeof(float) << std::endl;
	std::cout<<"Sizeof Struct:" << sizeof(Complex) << std::endl;
}
