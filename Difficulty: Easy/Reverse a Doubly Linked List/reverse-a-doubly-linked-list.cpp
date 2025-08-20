/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL)
            return head;
        DLLNode* before=NULL;
        DLLNode* curr=head;
        while(curr!=NULL){
            before=curr->prev;
            curr->prev=curr->next;
            curr->next=before;
            curr=curr->prev;
        }
        return before->prev;
    }
};