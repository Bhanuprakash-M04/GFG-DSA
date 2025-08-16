/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
    void rootToLeaf(Node* root,vector<vector<int>>& ans,vector<int>& tmp){
        if(root==NULL)
            return;
        tmp.push_back(root->data);
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(tmp);
        }
        else{
            rootToLeaf(root->left,ans,tmp);
            rootToLeaf(root->right,ans,tmp);
        }
        tmp.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>ans;
        vector<int>tmp;
        rootToLeaf(root,ans,tmp);
        return ans;
    }
};