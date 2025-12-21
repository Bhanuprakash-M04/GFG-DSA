class Node {
    public:
    Node* prev;
    Node* next;
    int key;
    int value;
    Node(int k,int v){
        prev=next=NULL;
        key=k;
        value=v;
    }
};


class LRUCache {
  public:
    unordered_map<int,Node*>mymap;
    Node* head;
    Node* tail;
    int size;
    LRUCache(int cap) {
        size=cap;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
        mymap.clear();
    }

    int get(int key) {
        if(mymap.find(key)==mymap.end())
            return -1;
        Node* nn=mymap[key];
        deleteBefore(nn);
        insertAfterHead(nn);
        return nn->value;
    }

        
    void put(int key, int value) {
        if(mymap.find(key)!=mymap.end()){
            Node* nn=mymap[key];
            nn->value=value;
            mymap[key]=nn;
            deleteBefore(nn);
            insertAfterHead(nn);
            return ;
        }
        if(mymap.size()==size){
            Node* nn=tail->prev;
            deleteBefore(nn);
            mymap.erase(nn->key);
            delete(nn);
        }
        Node* newNode=new Node(key,value);
        insertAfterHead(newNode);
        mymap[key]=newNode;
    }
    
    void insertAfterHead(Node* nn){
        nn->next=head->next;
        nn->prev=head;
        head->next->prev=nn;
        head->next=nn;
    }
    void deleteBefore(Node* nn){
        nn->prev->next=nn->next;
        nn->next->prev=nn->prev;
    }
};