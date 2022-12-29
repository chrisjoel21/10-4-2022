#include <iostream>
using namespace std;
//#include "sasar.h"
#include "sasar.cpp"//4th

int main(){
    char k = ' ';
    //sasar s1;//10
    sasar<int>s1;//3rd type

    sasar<char> s2;
    //sasar s2(5);
    cout << s1.push(3);//ret is bool
    s2.pop(k);
}