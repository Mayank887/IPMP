
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
bool isPalindrome(Node *head)
    {
        //Your code here
         stack<int> s;
         Node *p=head;
         while(p!=NULL){
             s.push(p->data);
             p=p->next;
         }
         p=head;
         while(p!=NULL){
             if(p->data!=s.top())
             return false;
             s.pop();
             p=p->next;
         }
         return true;
        
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
        cout<<isPalindrome(head)<<endl;
    }

    return 0;
}