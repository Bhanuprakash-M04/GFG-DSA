// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

Node *deleteAtPosition(Node *head, int pos) {
    if(head==NULL)
        return NULL;
    if(pos==1)
        return head->next;
    int cnt=1;
    Node* curr=head;
    while(curr->next){
        if(cnt==pos-1)
            break;
        curr=curr->next;
        cnt++;
    }
    curr->next=curr->next->next;
    return head;
    
}