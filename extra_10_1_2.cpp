//extra_10_1_2 implement the stack
//how to apply template in sasar.h
#include <iostream>
#include "sasar2.cpp"

using namespace std;


    


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


    sasar<int> stack(100);
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