/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pre=NULL;
        Node* suc=NULL;
        Node* tmp=root;
        while(root!=NULL){
            if(root->data<key)
            {
                pre=root;
                root=root->right;
            }
            else
            {
                root=root->left;
            }
        }
        while(tmp!=NULL){
            if(tmp->data>key){
                suc=tmp;
                tmp=tmp->left;
            }
            else
                tmp=tmp->right;
        }
        return {pre,suc};
    }
};