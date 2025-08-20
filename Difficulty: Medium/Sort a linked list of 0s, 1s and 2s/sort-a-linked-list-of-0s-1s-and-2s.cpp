/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(head==NULL || head->next==NULL)
            return head;
        Node* zero=new Node(-1);
        Node* one=new Node(-1);
        Node* two=new Node(-1);
        Node* l0=zero;
        Node* l1=one;
        Node* l2=two;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0)
            {
                zero->next=temp;
                zero=zero->next;
            }
            else if(temp->data==1){
                one->next=temp;
                one=one->next;
            }
            else{
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
        }
        zero->next=(l1->next) ? l1->next : l2->next;
        one->next=l2->next;
        two->next=NULL;
        return l0->next;
    }
};