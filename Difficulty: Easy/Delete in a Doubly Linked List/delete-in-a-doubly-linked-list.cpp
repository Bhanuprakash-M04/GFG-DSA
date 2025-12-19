/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if(x==1){
            Node* temp=head->next;
            temp->prev=NULL;
            head->next=NULL;
            delete(head);
            return temp;
        }
        int cnt=1;
        Node* curr=head;
        while(curr->next){
            if(cnt==x-1)
                break;
            curr=curr->next;
            cnt++;
        }
        if(curr->next->next==NULL){
            Node* temp=curr->next;
            curr->next=NULL;
            temp->prev=NULL;
            delete(temp);
            return head;
        }
        else{
            Node* temp=curr->next;
            curr->next=temp->next;
            temp->next->prev=curr;
            temp->next=NULL;
            temp->prev=NULL;
            delete(temp);
        }
        return head;
    }
};