struct Node *insert(struct Node *head, int data) {
    // Code here
    Node *nn=new Node(data);
    if(head==NULL){
    nn->npx=XOR(NULL,NULL);
    head=nn;
    return head;}
    else{
        nn->npx=XOR(NULL,head);
        head->npx=XOR(head->npx,nn);
        head=nn;
        return head;
    }
     
}

vector<int> printList(struct Node *head) {
    // Code here
    vector<int> v;
    Node *p=NULL;
    Node *n;
    Node *c=head;
    while(c!=NULL){
        v.push_back(c->data);
        
       n=XOR(c->npx,p);
        p=c;
       
        c=n;
       
       
    }
     //v.push_back(c->data);
     return v;
}