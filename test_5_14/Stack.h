#pragma once

class Stack
{
public:
	//在类里面定义
	void Init()
	{
		_a = nullptr;
		_top = 0;
		_capacity = 0;
	}

	//在类里面声明
	void Push(int x);
	void Pop();
//private:
	
	int* _a;
	int _top;
	int _capacity;
};