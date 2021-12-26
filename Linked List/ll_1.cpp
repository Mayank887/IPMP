
#include <iostream>

using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
int nthfromend(node *head,int n){
    int c=0;
    node *p=head;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    if(n>c)
    return -1;
    p=head;
    for(int i=0;i<c-n;i++)
    p=p->next;
    return p->data;
    
}
void display(node *head){
    node *p=head;
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;}
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node *head=new node(0);
        node *temp=head;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            node *nn=new node(x);
            temp->next=nn;
            temp=nn;
        }
        head=head->next;
        int x;
        cin>>x;
        cout<<nthfromend(head,x);
        
        
    }

    return 0;
}