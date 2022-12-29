#include <iostream>
using namespace std;

template <class T>
class sasar{
    private:
    T *arr;
    int size;
    int chris;
    public:
    sasar(int _size){
        chris = -1;
        size = _size;
        arr = new int [size];
    }
    bool isfull();
    int top();
    bool isempty();
    bool push(T); // call isfull yes...bool return false
    bool pop(); // call isempty()
    void print();

};