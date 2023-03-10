#include <iostream>

struct node {
    int data;
    node* next;
};

class queue {
    private:
        node* front;
        node* tail;
    public:
        queue();
        void enqueue(int val);
        int peek();
        void dequeue();
        bool isEmpty();
        void print();
};

queue::queue() {
    // constructor
    front = nullptr;
    tail = nullptr;
}

void queue::enqueue(int val) {
    // enqueue to the end of the queue (aka the tail)
    node *temp = new node();
    temp->data=val;
    temp->next=nullptr;

    temp->next=tail;
    tail = temp;

}

int queue::peek() {
    // returns the data at the front of the queue, otherwise -1 if the list is empty
    if(isEmpty()){
        return -1;
    }
    return front->data;
}

void queue::dequeue() {
    // if the queue is not empty, dequeue from the front of the queue & delete the node
    if(!(isEmpty())){
        node *temp = new node();
        temp->data= front->data;
        front = front->next;
        delete temp;
    }
}

bool queue::isEmpty() {
    // return true if queue is empty, false otherwise
    if(front == nullptr|| tail == nullptr){
        return true;
    }
    return false;
}

void queue::print() {
    // print out each value of the queue
    // no traversing using a temp node, make sure to dequeue
}

int main() {
    queue q;
    // for(int i = 2; i <= 10; i += 2) {
    //     q.enqueue(i);
    // }

    // std::cout << q.peek() << std::endl;

    // q.dequeue();
    // q.dequeue();
    // q.dequeue();

    // q.enqueue(20);

    // q.print();

    return 0;
}