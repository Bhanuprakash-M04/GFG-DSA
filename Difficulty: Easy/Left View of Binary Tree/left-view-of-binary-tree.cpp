/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL)
            return ans;
        queue<pair<Node*,int>>q;
        map<int,int>mymap;
        q.push({root,0});
        while(!q.empty()){
            Node* tmp=q.front().first;
            int value=q.front().second;
            q.pop();
            if(mymap.find(value)==mymap.end()){
                mymap[value]=tmp->data;
            }
            if(tmp->left!=NULL)
                q.push({tmp->left,value+1});
            if(tmp->right!=NULL)
                q.push({tmp->right,value+1});
        }
        for(auto it:mymap){
            ans.push_back(it.second);  
        }
        return ans;
    }
};