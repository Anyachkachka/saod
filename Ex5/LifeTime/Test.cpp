#include "Test.h"
#include <iostream>

using namespace std;
Test::Test() {
	nCount++;
	cout << this << " " << nCount << " created\n";
}

Test::~Test(){
	nCount--;
	cout << this << " " << nCount << " destroed\n";
}

Test::Test(const Test& obj) {
	nCount++;
	cout << this << " " << nCount << " created\n";
}

int Test::nCount = 0;

void Test::foo(Test t) {
	cout << "is running\n";
}