/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head){
        if(head==NULL || head->next==NULL)
            return head;
        Node* prev=NULL;
        Node* curr=NULL;
        Node* temp=head;
        while(temp){
            curr=temp;
            temp=temp->next;
            curr->next=prev;
            prev=curr;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        if(head==NULL)
            return NULL;
        int carry=1;
        Node* rev=reverse(head);
        Node*temp=rev;
        while(temp){
            int ans=temp->data+carry;
            if(ans<10)
            {
                temp->data=ans;
                carry=0;
            }
            else
            {
                temp->data=0;
                carry=1;
            }
            if(carry==0)
                break;
            temp=temp->next;
        }
        head=reverse(rev);
        if(carry==0){
            return head;
        }
        Node* newHead=new Node(1);
        newHead->next=head;
        return newHead;
        // return head of list after adding one
    }
};