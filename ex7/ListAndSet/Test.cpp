#include "stdafx.h"
#include "Test.h"


Test::Test()
{
	val = 0;
	std::cout << "Constructor fin" << std::endl;
}

Test::Test(int v) 
{
	val = v;
	std::cout << "Constructor fin" << std::endl;
}

Test::~Test()
{
	std::cout << "Destructor fin" << std::endl;
}

Test::Test(const Test& t)
{
	val = t.val;
}