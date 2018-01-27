#include "hoge.hpp"
#include <iostream>

class Hoge
{
public:
	Hoge();
	~Hoge();
	void method1(void);
	void method2(void);
	
private:
	int i_;
};

//--------------------------------------------------

Hoge::Hoge()
{
}

Hoge::~Hoge()
{
}

void Hoge::method1(void)
{
	std::cout << "10 or upper" << std::endl;
	std::cin >> i_;

	if (i_ < 10)
	{
		std::cout << i_ << " is less than 10." << std::endl;
	}
	else
	{
		std::cout << i_ << "is equal to or larger than 10." << std::endl;
	}
}

void Hoge::method2(void)
{
	std::cout << "100 or upper" << std::endl;
	std::cin >> i_;

	if (i_ < 100)
	{
		std::cout << i_ << " is less than 100." << std::endl;
	}
	else
	{
		std::cout << i_ << "is equal to or larger than 100." << std::endl;
	}
}

//--------------------------------------------------

Hoge hoge;

void hoge_method1(void)
{
	hoge.method1();
}

void hoge_method2(void)
{
	hoge.method2();
}
