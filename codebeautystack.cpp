#include <iostream>
using namespace std;
#include <stack>


void print(stack <int> stack){
    while (!stack.empty())
    {
        cout << stack.top()<<endl;
        stack.pop();
    }
    
}

int main(){
    //empty, size, push, pop, top
    stack<int>numberStack;
    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);
    print(numberStack);
    //numberStack.pop();
    numberStack.pop();
    numberStack.pop();

    if(numberStack.empty())
        cout << "stack is empty" << endl;
    else
        cout << "stack is not empty" <<endl;
    cout << "Stack size" << numberStack.size()<< endl;

    system("pause>0");
}
