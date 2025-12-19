/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        if(head==NULL || head->next==NULL)
            return head;
        Node* before=NULL;
        Node* curr=head;
        Node* after=head->next;
        while(curr){
            curr->next=before;
            curr->prev=after;
            before=curr;
            curr=after;
            if(curr==NULL)
                break;
            after=after->next;
        }
        return before;
    }
};