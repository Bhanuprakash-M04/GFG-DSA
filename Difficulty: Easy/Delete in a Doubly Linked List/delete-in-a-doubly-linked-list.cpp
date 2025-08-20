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
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==NULL || head->next==NULL)
            return NULL;
        int cnt=0;
        Node* temp=head;
        while(temp->next!=NULL){
            cnt++;
            if(cnt==x)
                break;
            temp=temp->next;
        }
        
        //DELETE AT HEAD
        if(temp->prev==NULL)
        {
            Node* myNode=temp->next;
            temp->next=NULL;
            myNode->prev=NULL;
            delete(temp);
            return myNode;
        }
        
        //DELETE AT TAIL
        if(temp->next==NULL){
            temp->prev->next=NULL;
            temp->prev=NULL;
            delete(temp);
            return head;
        }
        
        //DELETE IN THE MIDDLE
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        temp->prev=NULL;
        temp->next=NULL;
        delete(temp);
        return head;
    }
};