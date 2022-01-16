
#include <iostream>
#include <list>
#include <unordered_map>


using namespace std;

class LRU{
    int size;
    list<int> l;
    unordered_map<int,list<int>::iterator> m;
    
    public:
    LRU(int x){
        size=x;
        
    }
    void refer(int x){
        if(m.find(x)==m.end()){
            if(l.size()==size)
            l.pop_back();
            l.push_front(x);
            m[x]=l.begin();
        }
        else{
            l.erase(m[x]);
           
            l.push_front(x);
             m[x]=l.begin();
        }
    }
    void display(){
        for(auto it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";
        cout<<endl;
    }
};
int main()
{
    LRU a(3);
    a.refer(1);
    a.display();
    a.refer(2);
    a.display();
    a.refer(3);
    a.display();
    a.refer(4);
    a.display();
    a.refer(3);
    a.display();
    

    return 0;
}
