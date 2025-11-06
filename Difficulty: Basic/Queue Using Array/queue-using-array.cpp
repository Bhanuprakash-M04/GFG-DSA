class myQueue {

  public:
    int *arr;
    int front=-1,rear=-1;
    int curr_size;
    int capacity;
    myQueue(int n) {
        arr = new int[n];
        curr_size=0;
        capacity=n;
    }

    bool isEmpty() {
        return (curr_size==0);
    }

    bool isFull() {
        return (curr_size==capacity);
    }

    void enqueue(int x) {
        if(isFull())
            return;
        if(front==-1 && rear==-1){
           front=0;
           rear=0;
        }
        else{
           rear=(rear+1)%capacity;
        }
        arr[rear]=x;
        curr_size++;
    }

    void dequeue() {
        if(isEmpty())
            return;
        if(curr_size==1){
            front=-1;
            rear=-1;
        }
        else
            front=(front+1)%capacity;
        curr_size--;
    }

    int getFront() {
        if(curr_size==0)
            return -1;
        return arr[front];
    }

    int getRear() {
        if(curr_size==0)
            return -1;
        return arr[rear];
    }
};