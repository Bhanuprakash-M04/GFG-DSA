// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int,int>>ans;
        Node* first=head;
        Node* last=head;
        while(last->next!=NULL){
            last=last->next;
        }
        while(first!=last){
            int sum=first->data+last->data;
            if(sum==target){
                ans.push_back({first->data,last->data});
                first=first->next;
                // last=last->next;
            }
            else if(sum>target)
                last=last->prev;
            else
                first=first->next;
        }
        return ans;
    }
};