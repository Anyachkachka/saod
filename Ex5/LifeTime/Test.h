#pragma once

class Test {
	
public:
	static int nCount;
	Test();
	Test(const Test& obj);
	~Test();

	void foo(Test t);
};

