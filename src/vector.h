#ifndef VECTOR_H
#define VECTOR_H

template<typename T>
class Vector {
    public:
    Vector<T>();
    Vector<T>(const int &size);
    Vector<T>(const T[] &data);
    ~Vector<T>();
    Vector<T>(Vector<T> &other);
};

#endif