// SmartPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "_Test.h"
#include <memory>
#include <iostream>

std::weak_ptr<_Test> wp;
int main()
{
	using namespace std;
	{
		auto sp = shared_ptr<_Test>(new _Test);
		cout << sp.use_count() << endl;
		wp = sp;
		cout << sp.use_count() << endl;
		auto p = wp.lock();

		if (p)
			cout << "Object is alive\n" << wp.use_count() << endl;
		else
			cout << "No owing object" << endl;
	}
	auto p = wp.lock();

	if (p)
		cout << "Object is alive\n" << wp.use_count() << endl;
	else
		cout << "No owing object" << endl;
    return 0;
}

