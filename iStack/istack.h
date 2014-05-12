#ifndef ISTACK_H
#define ISTACK_H

#include <iostream>
#include <vector>

using namespace std;
class iStack
{
public:
    iStack( int capacity)
        :_stack(capacity),_top(0){}

    bool pop(int &value);
    bool push(int value);

    bool full();
    bool empty();
    void display();

    int size();



private:
    int _top;
    vector<int> _stack;
};

#endif // ISTACK_H
