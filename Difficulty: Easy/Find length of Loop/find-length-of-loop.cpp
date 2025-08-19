/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // Code here
        int temp=0;
        unordered_map<Node*,int>mymap;
        while(head!=NULL){
            temp++;
            if(mymap.find(head)!=mymap.end()){
                return temp-mymap[head]; 
            }
            mymap[head]=temp;
            head=head->next;
        }
        return 0;
    }
};