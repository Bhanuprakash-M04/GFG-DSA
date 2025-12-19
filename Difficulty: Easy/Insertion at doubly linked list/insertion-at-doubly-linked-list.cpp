/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        Node* temp=new Node(x);
        int cnt=0;
        Node* curr=head;
        while(curr->next){
            if(cnt==p)
                break;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            curr->next=temp;
            temp->prev=curr;
            return head;
        }
        temp->next=curr->next;
        temp->prev=curr;
        curr->next->prev=temp;
        curr->next=temp;
        return head;
    }
};