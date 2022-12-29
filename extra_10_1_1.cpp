//extra_10_1_1 implement the stack

#include <iostream>
using namespace std;

class sasar{
    private:
    int *arr;
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
    bool push(int); // call isfull yes...bool return false
    bool pop(); // call isempty()
    void print();

};
    int sasar::top(){
        return arr[chris];
    }

    /*bool sasar::isfull(){
        if(chris>=size-1){
            return true;
        }
        return false;
    }*/
    bool sasar::isempty(){
        if(chris == -1){
            return true;
        }
        return false;
    }
    bool sasar::push(int val)
    {
        if(chris < size){
            arr[chris++] = val;
            cout << "pushed" <<endl;
            return true;
        }
        cout << "array is full" <<endl;
        return false;
    } // call isfull yes...bool return false
    bool sasar::pop(){
        if(!isempty()){
            chris--;            
            return true;
        }
        cout << "array is empty" <<endl;
        return false;
    }// call isempty()
   /* void sasar::print(){
        
        while(!isempty()){
            cout<< arr[chris] <<endl;
            pop();
        }
    }*/



int main(){
    /*int k = 0;
    //sasar s1;//10
    sasar s1(1);//3rd type

    sasar s2(3);
    //sasar s2(5);
    cout << s1.push(3);
    cout << s1.push(4);
    cout << s1.push(3);//ret is bool
    s1.print();
    //s2.pop(k);*/


    sasar stack(100);
    for(int i = 0; i < 20; i++)
    {
        stack.push(i);
    }
    while(!stack.isempty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
    return 0;
}