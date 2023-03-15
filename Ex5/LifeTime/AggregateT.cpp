#include "AggregateT.h"
#include <iostream>
using namespace std;

template <typename T>
AggregateT<T>::AggregateT() {
	cout << this << " AggregateT create\n";
}
template <typename T>
AggregateT<T>::~AggregateT() {
	cout << this << " AggregateT destroed\n";
}