#ifndef VECTOR_H
#define VECTOR_H

class Vector {
public:
	Vector() {}
	int gimme1() { return 1; }
};
/*
template<typename T>
class Vector {
    public:
    Vector<T>();
	Vector<T>(const int& size);
    ~Vector<T>();

    private:
    int size;
	T* data;
};
*/

#endif