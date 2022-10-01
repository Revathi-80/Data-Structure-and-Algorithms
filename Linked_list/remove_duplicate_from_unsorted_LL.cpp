// M1 --- >O(N2)
// M2 --> o(N)

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      Node *p1,*p2,*temp;
      p1=head;
      while(p1!=NULL && p1->next!=NULL){
          p2=p1;
          while(p2->next!=NULL){
              if(p1->data==p2->next->data){
                  temp=p2->next;
                  p2->next=p2->next->next;
                  delete(temp);
              }
              else{
                  p2=p2->next;
              }
          }
          p1=p1->next;
      }
      return head;
    }
};

// M2 --- > hashing

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_set<int>s;
      Node *curr=head,*prev=NULL;
      while(curr!=NULL) {
          if(s.find(curr->data)!=s.end()){
              prev->next=curr->next;
              delete(curr);
          }
          else {
              s.insert(curr->data);
              prev=curr;
          }
          curr=prev->next;
      }
      
      return head;
    }
};
