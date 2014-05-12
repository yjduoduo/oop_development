#ifndef INTARRAYRC_H
#define INTARRAYRC_H

#include "intarray.h"

class IntArrayRC : public IntArray
{
public:
    IntArrayRC(int sz = DefaultArraySize);
    IntArrayRC(const int *array, int array_size);
    IntArrayRC(const IntArrayRC &rhs);
    virtual int& operator[] (int);
private:
    void check_range( int );
};

#endif // INTARRAYRC_H
