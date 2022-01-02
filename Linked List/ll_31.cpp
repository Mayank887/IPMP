 Node *copyList(Node *head)
    {
        vector<Node*> v;
        Node *p=head;
        Node *head2=new Node(0);
        Node *t=head2;
        Node *n;
        while(p!=NULL){
             v.push_back(p);
            n=p->next;
            p->next=new Node(p->data);
            t->next=p->next;
            t=t->next;
            t->arb=p;
            p=n;
        }
        head2=head2->next;
        t=head2;
        while(t!=NULL){
            if(t->arb->arb!=NULL)
            t->arb=t->arb->arb->next;
            else
            t->arb=NULL;
            t=t->next;
        }
        for(int i=0;i<v.size()-1;i++){
            v[i]->next=v[i+1];
        }
        v[v.size()-1]->next=NULL;
        v.clear();
        return head2;
        
}