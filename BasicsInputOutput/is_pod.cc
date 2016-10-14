#include <iostream>
#include <type_traits>

using std::cout;

struct Complex
{
	float real;
	float imag;
};

int main()
{
	cout << "Is Complex a POD? " << (std::is_pod<Complex>()? "yes": "no")<< "\n";
}
