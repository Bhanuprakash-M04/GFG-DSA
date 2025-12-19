/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        if(head==NULL)
            return new Node(val);
        Node* curr=head;
        int cnt=1;
        Node* temp=new Node(val);
        if(pos==1){
            temp->next=head;
            return temp;
        }
        while(curr->next){
            if(cnt==pos-1)
                break;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL)
            curr->next=temp;
        else{
            temp->next=curr->next;
            curr->next=temp;
        }
        return head;
        
    }
};