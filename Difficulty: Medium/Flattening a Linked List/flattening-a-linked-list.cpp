/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
  
    Node* merge(Node* list1,Node* list2){
        Node* curr=new Node(-1);
        Node* dummy=curr;
        while(list1 && list2){
            if(list1->data<list2->data)
            {
                dummy->bottom=list1;
                dummy=list1;
                //dummy->next=NULL;
                list1=list1->bottom;
            }
            else{
                dummy->bottom=list2;
                dummy=list2;
                //dummy->next=NULL;
                list2=list2->bottom;
            }
        }
        if(list1){
            dummy->bottom=list1;
        }
        if(list2){
            dummy->bottom=list2;
        }
        return curr->bottom;
    }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        if(root==NULL || root->next==NULL)
            return root;
        Node* mergeHead=flatten(root->next);
        Node* newHead=merge(mergeHead,root);
        return newHead;
    }
};