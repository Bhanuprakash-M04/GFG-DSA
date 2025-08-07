/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    bool isLeaf(Node* root){
        if(root!=NULL && root->left==NULL && root->right==NULL)
            return true;
        return false;
    }
    
    void LeftBoundary(Node* root,vector<int>&ans){
        if(root->left!=NULL){
            Node* curr=root->left;
            while(curr!=NULL && !isLeaf(curr)){
                ans.push_back(curr->data);
                if(curr->left!=NULL){
                    curr=curr->left;
                }
                else{
                    curr=curr->right;
                }
            }
        }
    }
    
    void RightBoundary(Node* root,vector<int>&ans){
        stack<int>st;
        Node* curr=root->right;
        while(curr!=NULL && !isLeaf(curr)){
            st.push(curr->data);
            if(curr->right!=NULL)
                curr=curr->right;
            else
                curr=curr->left;
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    }
    
    void LeafNodes(Node* root,vector<int>&ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        if(root->left!=NULL)
            LeafNodes(root->left,ans);
        if(root->right!=NULL)
            LeafNodes(root->right,ans);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL)
            return ans;
        if(!isLeaf(root))
            ans.push_back(root->data);
        LeftBoundary(root,ans);
        LeafNodes(root,ans);
        RightBoundary(root,ans);
        return ans;
    }
};