#pragma once

class Stack
{
public:
	//�������涨��
	void Init()
	{
		_a = nullptr;
		_top = 0;
		_capacity = 0;
	}

	//������������
	void Push(int x);
	void Pop();
//private:
	
	int* _a;
	int _top;
	int _capacity;
};