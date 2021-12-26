
#include <iostream>

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
void deleteAlt(struct Node *head){
   
    Node *p=head;
    Node *t=NULL;
    while(p!=NULL && p->next!=NULL){
        t=p->next;
        p->next=t->next;
        p=t->next;
        free(t);
    }
}

int main()
{
    Node *head=new Node(0);
    int n;
    cin>>n;
    Node *temp=head;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    head=head->next;
    display(head);
    deleteAlt(head);
    display(head);

    return 0;
}