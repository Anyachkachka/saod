#include "Aggregate.h"
#include <iostream>

using namespace std;
Aggregate::Aggregate() {
	cout << this << " Aggregate created\n";
}

Aggregate::~Aggregate() {
	cout << this << " Aggregate destroed\n";
}