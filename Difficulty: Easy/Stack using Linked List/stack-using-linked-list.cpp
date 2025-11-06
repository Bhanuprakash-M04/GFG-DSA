/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {

  public:
    int cnt;
    Node* top;
    myStack() {
        top=NULL;
        cnt=0;
    }

    bool isEmpty() {
        return (cnt==0);
    }

    void push(int x) {
        Node* newNode=new Node(x);
        newNode->next=top;
        top=newNode;
        cnt++;
    }

    void pop() {
        if(isEmpty())
            return;
        Node* temp=top;
        top=top->next;
        delete(temp);
        cnt--;
    }

    int peek() {
        if(cnt==0)
            return -1;
        return top->data;
    }

    int size() {
        return cnt;
    }
};