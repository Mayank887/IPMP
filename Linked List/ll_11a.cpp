#include <iostream>
#include <set>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void display(Node *head){
    Node *p=head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
  Node *reverse(Node *head){
        Node *c=head;
        Node *p=NULL;
        Node *n=NULL;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
 
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    set<int> s;
    struct Node* a=head1;
    struct Node* b=head2;
    while(a!=NULL){
        s.insert(a->data);
        a=a->next;
    }
     while(b!=NULL){
        s.insert(b->data);
        b=b->next;
    }
    struct Node *head=new Node(0);
    struct Node *c=head;
    for(auto i :s){
        struct Node *n=new Node(i);
        c->next=n;
        c=n;
    }
    head=head->next;
    return head;
    
}
int main()
{
    Node *head1=new Node(0);
    Node *head2=new Node(0);
    int n1,n2;
    cin>>n1>>n2;
    Node *temp=head1;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    temp=head2;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    head1=head1->next;
    head2=head2->next;
    display(head1);
    display(head2);
    Node *r=makeUnion(head1,head2);
    display(r);

    return 0;
}