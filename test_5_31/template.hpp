#pragma once
//����
template<class T>
void Swap(T& left, T& right);

template<class T>
class Vector//Vector���Ǿ�����࣬�Ǳ��������ݱ�ʵ�������������ɾ������ģ��,��ʵ����˳���
{
public:
	Vector(size_t capacity = 10);
private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};

