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
    int getCount(Node* head) {
        if(head==NULL)
            return 0;
        int cnt=1;
        Node* curr=head;
        while(curr->next){
            curr=curr->next;
            cnt++;
        }
        return cnt;
    }
};