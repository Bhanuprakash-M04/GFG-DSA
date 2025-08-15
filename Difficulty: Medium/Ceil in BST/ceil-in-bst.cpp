/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};  */

int findCeil(Node* root, int input) {
    // Your code here
    int ans=-1;
    while(root!=NULL){
        if(root->data>=input){
            ans=root->data;
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return ans;
}