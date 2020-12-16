#include "Handler.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Handler *handler = new Handler(argv[1]);
		std::cout << *handler;
	}
	else
	{
		std::cout << "This is not 1 argument" << std::endl;
	}
	return (0);
}