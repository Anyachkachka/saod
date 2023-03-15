#include "Child.h"
#include <iostream>

using namespace std;
Child::Child() {
	cout << this << " Child work\n";
}

Child::~Child() {
	cout << this << " Child dead\n";
}