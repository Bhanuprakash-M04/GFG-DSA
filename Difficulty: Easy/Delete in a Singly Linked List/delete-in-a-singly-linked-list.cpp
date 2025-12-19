/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        Node* curr=head;
        if(x==1)
            return head->next;
        int cnt=1;
        while(curr->next){
            if(cnt==x-1)
                break;
            curr=curr->next;
            cnt++;
        }
        curr->next=curr->next->next;
        return head;
        
    }
};