#include "fuga.hpp"
#include <iostream>

class Fuga
{
public:
	Fuga();
	~Fuga();
	void method1(void);
	void method2(void);
	
private:
	int i_;
};

//--------------------------------------------------

Fuga::Fuga()
{
}

Fuga::~Fuga()
{
}

void Fuga::method1(void)
{
	std::cout << "5 or upper" << std::endl;
	std::cin >> i_;

	if (i_ < 5)
	{
		std::cout << i_ << " is less than 5." << std::endl;
	}
	else
	{
		std::cout << i_ << "is equal to or larger than 5." << std::endl;
	}
}

void Fuga::method2(void)
{
	std::cout << "50 or upper" << std::endl;
	std::cin >> i_;

	if (i_ < 50)
	{
		std::cout << i_ << " is less than 50." << std::endl;
	}
	else
	{
		std::cout << i_ << "is equal to or larger than 50." << std::endl;
	}
}

//--------------------------------------------------

Fuga fuga;

void fuga_method1(void)
{
	fuga.method1();
}

void fuga_method2(void)
{
	fuga.method2();
}
