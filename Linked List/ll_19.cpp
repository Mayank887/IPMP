

#include <iostream>
#include <set>

using namespace std;
struct Node{
    char data;
    Node *next;
    Node(char x){
        data=x;
        next=NULL;
    }
};

struct Node* arrange(Node *head)
{
   //Code here
   Node *h=new Node(0);
   Node *t=h;
   Node *p=head;
   while(p!=NULL){
       if(p->data=='a' || p->data=='e' || p->data=='i' || p->data=='o' || p->data=='u'){
           
           Node *c=new Node(p->data);
           t->next=c;
           t=c;
       }
       p=p->next;
   }
   p=head;
   while(p!=NULL){
       if(p->data!='a' && p->data!='e' && p->data!='i' && p->data!='o' && p->data!='u'){
           
           Node *c=new Node(p->data);
           t->next=c;
           t=c;
       }
       p=p->next;
   }
   h=h->next;
   return h;
   
}
void display(Node *head){
    Node *p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
    
int main()
{
    Node *head1=new Node('a');
    
    int n;
    cin>>n;
    Node *temp=head1;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    
    head1=head1->next;
    display(head1);
    head1=arrange(head1);
    display(head1);

    return 0;
}