
#include <iostream>
#include <list>
#include <vector>


using namespace std;

class threestack{
    int capacity;
    int size;
    int *arr;
    int *next;
    int top[3];
    int free_;
    
    
    public:
    threestack(int n){
        size=0;
        capacity=n;
        arr=new int[n];
        next=new int[n];
        free_=0;
        for(int i=0;i<3;i++)
        top[i]=-1;
        for(int i=0;i<n-1;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }
    
    void push(int stackno,int value){
        if(size==capacity)
        cout<<"Overflow"<<endl;
        else{
            arr[free_]=value;
           int t= next[free_];
            next[free_]=top[stackno];
            top[stackno]=free_;
            free_=t;
            size++;
        }
    }
    int pop(int stackno){
        if(top[stackno]==-1)
        return -1;
        
        int x=arr[top[stackno]];
        free_=top[stackno];
        top[stackno]=next[top[stackno]];
        next[free_]=-1;
        size--;
        return x;
    }
    
};



int main()
{
    threestack s(5);
    s.push(0,1);
    s.push(2,2);
    s.push(0,3);
    s.push(0,4);
    s.push(1,5);
    s.push(0,6);
    cout<<s.pop(0)<<endl;
    cout<<s.pop(0)<<endl;
    cout<<s.pop(1)<<endl;
    cout<<s.pop(0)<<endl;
    s.push(2,6);
    cout<<s.pop(0)<<endl;
    cout<<s.pop(0)<<endl;
    cout<<s.pop(2)<<endl;
    
    
    

    return 0;
}