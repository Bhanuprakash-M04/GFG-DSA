/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*,int>>q;
        vector<int>ans;
        map<int,int>mymap;
        if(root!=NULL)
            q.push({root,0});
        while(!q.empty()){
            Node* tmp=q.front().first;
            int value=q.front().second;
            q.pop();
            if(mymap.find(value)==mymap.end())
                mymap[value]=tmp->data;
            if(tmp->left!=NULL)
                q.push({tmp->left,value-1});
            if(tmp->right!=NULL)
                q.push({tmp->right,value+1});
        }
        for(auto i:mymap){
            ans.push_back(i.second);
        }
        return ans;
    }
    
};