/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // Code here
        Node* slow=head;
        Node* fast=head;
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return 0;
        int cnt=0;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                slow=slow->next;
                cnt++;
                while(slow!=fast){
                    cnt++;
                    slow=slow->next;
                }
                break;
            }
        }
        return cnt;
    }
};