#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

A *generateA()
{
	return (new A);
}

B *generateB()
{
	return (new B);
}

C *generateC()
{
	return (new C);
}

Base *generate()
{
	srand(time(0));
	int i = rand() % 3;
	if (i == 1)
		return (generateA());
	if (i == 2)
		return (generateB());
	return (generateC());
}

void identify_from_pointer(Base *p)
{
	A *case1 = dynamic_cast<A*>(p);
	if (case1)
	{
		std::cout << "Type is A" << std::endl;
		return;
	}
	B *case2 = dynamic_cast<B*>(p);
	if (case2)
	{
		std::cout << "Type is B" << std::endl;
		return;
	}
	C *case3 = dynamic_cast<C*>(p);
	if (case3)
	{
		std::cout << "Type is C" << std::endl;
		return;
	}
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int main(void)
{
	Base *base = generate();
	identify_from_reference(*base);
	identify_from_pointer(base);
	return (0);
}