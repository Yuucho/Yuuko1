#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Weight
{
public:
	Weight()
	{
		cout << "Weight()" << endl;
	}

	Weight(const Weight& w)
	{
		cout << "Weight(const Weight& w)" << endl;
	}

	Weight& operator=(const Weight& w)
	{
		cout << "Weight& operator=(const Weight& w)" << endl;
		return *this;
	}

	~Weight()
	{
		cout << "~Weight()" << endl;
	}
};

Weight f(Weight u)
{
	Weight v(u);
	Weight w = v;
	return w;
}

int main()
{
	Weight x;
	Weight ret = f(f(x));
	return 0;
}