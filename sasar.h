template <class T>

class sasar{
    private:
    T *elt;
    int size;
    int top;
    public:
    sasar(int =10);
    bool isfull();
    bool isempty();
    bool push(T); // call isfull yes...bool return false
    bool pop(T &); // call isempty()
   // void print();
};