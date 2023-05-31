#include "stdafx.h"
#include "_Test.h"
#include <iostream>

_Test::_Test()
{
	std::cout << "Created" << std::endl;
}


_Test::~_Test()
{
	std::cout << "Destroyed" << std::endl;
}
