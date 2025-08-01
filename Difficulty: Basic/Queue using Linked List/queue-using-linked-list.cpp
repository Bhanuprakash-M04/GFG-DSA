/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
    QueueNode* nn=new QueueNode(x);
    if(rear==NULL)
    {
        rear=nn;
        front=nn;
    }
    else{
        rear->next=nn;
        rear=rear->next;
    }
        // Your Code
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front==NULL)
        return -1;
    int ans=front->data;
    front=front->next;
    if(front==NULL)
        rear=NULL;
    return ans;
    
        // Your Code       
}
