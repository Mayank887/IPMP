
#include <iostream>
#include <stack>

using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void display(node *head){
    node *p=head;
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;}
}
 int getMiddle(node *head)
    {
        int c=0;
        node *p=head;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        int n=c/2;
        p=head;
        for(int i=0;i<n;i++){
            p=p->next;
        }
        return p->data;
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
        cout<<getMiddle(head)<<endl;
    }

    return 0;
}