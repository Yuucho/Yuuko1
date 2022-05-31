#pragma once
//声明
template<class T>
void Swap(T& left, T& right);

template<class T>
class Vector//Vector不是具体的类，是编译器根据被实例化的类型生成具体类的模具,其实就是顺序表
{
public:
	Vector(size_t capacity = 10);
private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};

