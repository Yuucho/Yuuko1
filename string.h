#pragma once
#include <string.h>
#include <assert.h>
//string.h
#pragma once
#include <string.h>

namespace Yuucho
{
    class string
    {
    public:
        //ȱʡֵ,���ַ���ֻ��'\0'
        string(const char* str = "")
            : _size(strlen(str))
            , _capacity(_size)
        {
            //��ԶΪ'\0'�࿪һ��
            _str = new char[_capacity + 1];
            strcpy(_str, str);
        }

        ~string()
        {
            if (_str)
            {
                delete[] _str;
                _str = nullptr;
                _size = _capacity = 0;
            }
        }
        //û����������ȡ��������,��c_str����ӡ�ַ���
        //��ͨ����const����Կɵ���
        const char* c_str() const
        {
            return _str;
        }
        //���÷��ط����޸�,���ٿ���
        char& operator[](size_t pos)
        {
            assert(pos < _size);
            return _str[pos];
        }

        size_t size() const
        {
            return _size;
        }

        size_t capacity() const
        {
            return _capacity;
        }

        string(const string& s)
            :_size(strlen(s._str))
            , _capacity(_size)
        {
            _str = new char[_capacity + 1];
            strcpy(_str, s._str);
        }

        string& operator=(const string& s)
        {
            //(1)����Ը�ֵ
            if (this != &s)//����&��ȡ��ַ
            {
                //(2)�����µ��ڴ���Դ������������
                char* temp = new char[s._capacity + 1];
                strcpy(temp, s._str);//'\0'Ҳ������
                //(3)�ͷ�ԭ�е��ڴ���Դ
                delete[] _str;
                _str = temp;
                _size = s._size;
                _capacity = s._capacity;
            }
            //(4)���ر����������
            return *this;
        }

        void reserve(size_t n)
        {
            if (n > _capacity)
            {
                char* tmp = new char[n + 1];
                strcpy(tmp, _str);
                delete[] _str;
                _str = tmp;
                _capacity = n;
            }
        }

        void resize(size_t n, char ch = '\0')
        {
            if (n < _size)
            {
                _size = n;
                _str[_size] = '\0';
            }
            else
            {
                if (n > _capacity)
                {
                    reserve(n);
                }

                for (size_t i = _size; i < n; ++i)
                {
                    _str[i] = ch;
                }
                _size = n;
                _str[_size] = '\0';
            }
        }

        void push_back(char ch)
        {
            if (_size == _capacity)
            {
                reserve(_capacity == 0 ? 4 : _capacity * 2);
            }
            _str[_size] = ch;
            ++_size;
            _str[_size] = '\0';
        }

        string& operator+=(char ch)
        {
            push_back(ch);
            return *this;
        }

        void append(const char* str)
        {
            size_t len = _size + strlen(str);
            if (len > _capacity)
            {
                reserve(len);
            }
            strcpy(_str + _size, str);
            _size = len;
        }

        string& operator+=(const char* str)
        {
            append(str);
            return *this;
        }

    private:
        char* _str;
        size_t _size;	  //��Ч�ַ�����
        size_t _capacity;  //ʵ�ʴ洢��Ч�ַ��Ŀռ�
    };
    bool operator<(const string& s1, const string& s2)
    {
        return strcmp(s1.c_str(), s2.c_str()) < 0;
    }

    bool operator==(const string& s1, const string& s2)
    {
        return strcmp(s1.c_str(), s2.c_str()) == 0;
    }

    bool operator<=(const string& s1, const string& s2)
    {
        return s1 < s2 || s1 == s2;
    }

    bool operator>(const string& s1, const string& s2)
    {
        return !(s1 <= s2);
    }

    bool operator>=(const string& s1, const string& s2)
    {
        return !(s1 < s2);
    }

    bool operator!=(const string& s1, const string& s2)
    {
        return !(s1 == s2);
    }
}