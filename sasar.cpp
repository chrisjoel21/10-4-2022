#include "sasar.h"
template<class T> //1st
bool sasar<T>::pop(T &k) // 2nd name sasar<T>{
{
    if(!isempty()){
        k=elt[top];
        top--;
        return true;//i was able to pop
    }
return false;
}
template<class T>
bool sasar<T>::isfull(){
    return top >= size;
}
template<class T>
bool sasar<T>::isempty(){
    return top <=-1;
}

template<class T>
bool sasar<T>::push(T){
    if(!isfull()){
        elt[top++];
        return true;
    }
    return false;
} // call isfull yes...bool return false

//void print();