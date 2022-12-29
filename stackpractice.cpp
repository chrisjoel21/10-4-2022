//extra_10_1_3
#include <iostream>
using namespace std;


struct node {
    int data;
    node* next;
};

class stack {
    private:
        node* top;
    public:
        stack();
        void push(int val);
        int peek();
        void pop();
        bool isEmpty();
        void print();
};

stack::stack() {
    // constructor
    top = nullptr;
}

void stack::push(int val) {
    // pushes to top of the stack
    node *temp = new node();
    temp->data = val;
    temp->next = nullptr;
     temp->next = top;
     top = temp;

}

int stack::peek() {
    // if stack is empty, return -1
    if(isEmpty()){
        return-1;
    }
    // otherwise, return the data of the top of the stack
    else{
        return top->data;
    }
}

void stack::pop() {
    // if stack is not empty, delete the top node of the stack
    if(!(isEmpty())){

        //node *temp = new node();/// y don't we need a node
        //temp = top;
        node* temp = top; //like here 
        top = top->next;
        delete temp; 
    }
}

bool stack::isEmpty() {
    // return true if stack is empty, false otherwise
    if(top == nullptr){
        return true;
    }
    return false;
}

void stack::print() {
    // print out every node of the stack
    // cannot traverse using a temp node, must pop
    while (!isEmpty())
    {
        cout << top->data << " ";
        pop();
    }
    
}

int main() {
    stack s;
    for(int i = 2; i <= 10; i += 2) {
      s.push(i);
     }

     std::cout << s.peek() << std::endl;

     s.pop();
     s.pop();
     s.pop();

     std::cout << s.peek() << std::endl;

     s.push(20);

     s.print();

    return 0;
}