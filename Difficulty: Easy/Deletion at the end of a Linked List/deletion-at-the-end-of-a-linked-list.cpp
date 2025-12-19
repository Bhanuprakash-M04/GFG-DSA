/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        Node* curr=head;
        while(curr->next->next){
            curr=curr->next;
        }
        curr->next=NULL;
        return head;
        
    }
};