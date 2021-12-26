
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
void printreverse(node *head)
{
    if(head==NULL)
    return;
    printreverse(head->next);
    cout<<head->data<<" ";
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
        display(head);
        cout<<endl;
        printreverse(head);
    }

    return 0;
}