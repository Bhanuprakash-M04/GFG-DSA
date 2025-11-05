class myStack {
  public:
    int *arr;
    int capacity;
    int top;
    myStack(int n) {
        arr=new int[n];
        capacity=n;
        top=-1;
    }

    bool isEmpty() {
        return (top==-1);
    }

    bool isFull() {
        return (top==capacity-1);
    }

    void push(int x) {
        if(!isFull())
            arr[++top]=x;
    }

    void pop() {
        if(!isEmpty())
            arr[top--];
    }

    int peek() {
        if(top==-1)
            return -1;
        return arr[top];
    }
};