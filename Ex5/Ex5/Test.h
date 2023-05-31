#pragma once
#include <iostream>
using namespace std;
class Test
{
static int nCount;
public:

	Test() {
		cout << "Created" << endl;
		nCount++;
	}

	Test(const Test& t) {
		cout << "Copied" << endl;
		nCount++;
	}

	~Test() {
		cout << "Destroyed" << endl;
		nCount--;
	}
};

class Child :public Test {
public:
	Child() {
		cout << "Child created" << endl;
	}

	~Child() {
		cout << "Child destroyed" << endl;
	}
};

class Aggregate {
	Test m_objTest;
public:
	Aggregate() {
		cout << "Aggregate created" << endl;
	}
	~Aggregate() {
		cout << "Aggregate destroyed" << endl;
	}
};

template <typename T>
class AggregateT {
	T data;
public:
	AggregateT() {
		cout << "Template aggregate created" << endl;
	}
	~AggregateT() {
		cout << "Template aggregate destroyed" << endl;
	}
};