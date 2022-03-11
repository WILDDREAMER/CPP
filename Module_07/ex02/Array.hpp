#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
    T *_array;
    int _size;
    Array()
    {
        _array = new T[0];
        _size = 0;
    };
    Array(unsigned int n)
    {
        _array = new T[n];
        _size = n;
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] _array;
            _array = new T[other.size()];
            _size = other.size();
            for (int i = 0; i < other.size(); i++)
                _array[i] = other._array[i];
        }
        return *this;
    }
    Array(const Array &other)
    {
        _array = new T[other.size()];
        _size = other.size();
        for (int i = 0; i < other.size(); i++)
            _array[i] = other._array[i];
    }
    class OutOfRange : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "Out of range";
        }
    };
    int size() const{
        return _size;
    }
    T &operator[](int i)
    {
        try{
            if (i < 0 || i >= _size)
                throw OutOfRange();
            return _array[i];
        }
        catch(OutOfRange &e){
            std::cout << e.what();
        }
        return _array[0];
    }
    ~Array()
    {
        delete[] _array;
    }
};

#endif