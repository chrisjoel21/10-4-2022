struct node{
    int nb;
    node *next;

};

class mystack{
    private:
        node *top;
    public:
        mystack(){top = nullptr;}
        bool isempty(){
            if(top == nullptr){
                return true;
            }
            return false;
        }
        bool push(int);
        bool pop(int &);
        void print();
        void removeall();//clear
        //void traverse();
};


//extra_10_1_3
//why are we using stack
// when it comes to reversing stack is popular