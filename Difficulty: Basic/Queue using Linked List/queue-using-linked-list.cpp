class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  public:
    int cnt;
    Node* front;
    Node* rear;
    myQueue() {
        front=NULL;
        rear=NULL;
        cnt=0;
    }

    bool isEmpty() {
        return (cnt==0);
    }

    void enqueue(int x) {
        Node* newNode=new Node(x);
        if(cnt==0)
        {
            front=newNode;
            rear=newNode;
        }
        else{
             rear->next=newNode;
             rear=newNode;
        }
        cnt++;
    }

    void dequeue() {
        if(isEmpty())
            return;
        Node* temp=front;
        front=front->next;
        delete(temp);
        cnt--;
    }

    int getFront() {
        if(isEmpty())
            return -1;
        return front->data;
    }

    int size() {
        return cnt;
    }
};
