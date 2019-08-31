#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <stdexcept>

template<class T>
class Vector {
    public:
    Vector<T>() {
        this->m_size = 0;
        this->m_data = nullptr;
    }
    
    Vector<T>(const int& size) {
        if(size < 0) {
            throw std::invalid_argument("Vector size must be non-negative");
        }
        this->m_size = size;
        this->m_data = new T[size];
    }

    ~Vector<T>() {
        delete[] this->m_data;
    }

    int size() { return this->m_size; }

    private:
    int m_size;
    T* m_data;
};

#endif