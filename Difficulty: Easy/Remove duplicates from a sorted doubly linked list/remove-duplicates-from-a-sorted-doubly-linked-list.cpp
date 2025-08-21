/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        if(head==NULL || head->next==NULL)
            return head;
        Node* temp=head;
        while(temp && temp->next){
            Node* newNode=temp->next;
            while(newNode && temp->data==newNode->data){
                Node* duplicate=newNode;
                newNode=newNode->next;
                delete(duplicate);
            }
            temp->next=newNode;
            if(newNode)
                newNode->prev=temp;
            temp=temp->next;
        }
        return head;
    }
};