// ListAndSet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <set>
#include "Test.h"

int main()
{
	using namespace std;
	list<Test> tests;

	for (int i = 0; i < 5; i++)
		tests.push_back(Test());
	tests.sort();

	set<Test> tests_two;

	for (int i = 0; i < 2; i++)
		tests_two.insert(Test());

	cout << tests_two.size() << endl;

	tests.remove(Test());

	cout << tests.size() << endl;

    return 0;
}

