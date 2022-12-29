#include "sasar2.h"
template <class T>
int sasar<T>::top(){
        return arr[chris];
    }

    /*bool sasar::isfull(){
        if(chris>=size-1){
            return true;
        }
        return false;
    }*/
    template <class T>
    bool sasar<T>::isempty(){
        if(chris == -1){
            return true;
        }
        return false;
    }
    template <class T>
    bool sasar<T>::push(T val)
    {
        if(chris < size){
            arr[chris++] = val;
            cout << "pushed" <<endl;
            return true;
        }
        cout << "array is full" <<endl;
        return false;
    } // call isfull yes...bool return false

    template <class T>
    bool sasar<T>::pop(){
        if(!isempty()){
            chris--;            
            return true;
        }
        cout << "array is empty" <<endl;
        return false;
    }// call isempty()
   /* 
   template <class T>
   void sasar::print(){
        
        while(!isempty()){
            cout<< arr[chris] <<endl;
            pop();
        }
    }*/
