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
        // code here
        vector<pair<int,int>>ans;
        if(head==NULL || head->next==NULL)
            return ans;
        Node* start=head;
        Node* temp=head;
        while(temp->next){
            temp=temp->next;
        }
        Node* end=temp;
        while(start!=end && start->prev!=end){
            int sum=start->data+end->data;
            if(sum==target)
            {
                ans.push_back({start->data,end->data});
                start=start->next;
                end=end->prev;
            }
            else if(sum>target){
                end=end->prev;
            }
            else
            {
                start=start->next;
            }
        }
        return ans;
    }
};