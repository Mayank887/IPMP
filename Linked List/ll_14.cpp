
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
struct Node *reverse (struct Node *head, int k)
    { 
        
        struct Node *c=head;
        struct Node *p=NULL;
        struct Node *n=NULL;
        int count =0;
        while(c!=NULL && count <k){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            count++;
        }
        if(n!=NULL)
        head->next=reverse(n,k);
        return p;
        
    }
int main()
{
    Node *head1=new Node(0);
    
    int n;
    cin>>n;
    Node *temp=head1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    int k;cin>>k;
    head1=head1->next;
    display(head1);
    head1=reverse(head1,k);
    display(head1);

    return 0;
}