/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        if(head==NULL)
            return new Node(x);
        Node* curr=head;
        int len=0;
        while(curr){
            curr=curr->next;
            len++;
        }
        int pos=len/2+len%2;
        Node* temp=new Node(x);
        curr=head;
        while(pos>1){
            curr=curr->next;
            pos--;
        }
        temp->next=curr->next;
        curr->next=temp;
        return head;
        
    }
};