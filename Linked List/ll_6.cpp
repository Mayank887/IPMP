
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
bool detectLoop(node* head)
    {
        node *slow=head;
        node *fast=head;
        while(slow && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return 1;
            
        }
        return 0;
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
        cout<<detectLoop(head)<<endl;
    }

    return 0;
}