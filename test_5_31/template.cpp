#include "template.hpp"
//∂®“Â
template<class T >
void Swap(T& left, T& right)
{
	T temp = left;
	left = right;
	right = temp;
}

template<class T>
Vector<T>::Vector(size_t capacity)
	: _pData(new T[capacity])
	, _size(0)
	, _capacity(capacity)
{}


template
void Swap<int>(int& left, int& right);

template
class Vector<int>;

template
class Vector<double>;