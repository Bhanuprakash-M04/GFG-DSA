/*
class Node {
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
    Node* rotate(Node* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        int cnt=0;
        Node* curr=head;
        while(curr){
            curr=curr->next;
            cnt++;
        }
        k=k%cnt;
        if(k==0)
            return head;
        Node* tmp=head;
        while(k>1 && tmp){
            tmp=tmp->next;
            k--;
        }
        Node* nextNode=tmp->next;
        Node* newHead=nextNode;
        tmp->next=NULL;
        while(nextNode->next){
            nextNode=nextNode->next;
        }
        nextNode->next=head;
        return newHead;
    }
};