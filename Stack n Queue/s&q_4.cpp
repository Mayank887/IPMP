
#include <iostream>
#include <stack> 

using namespace std;

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       
       int getMin(){
           
           //Write your code here
           if(s.empty())
           return -1;
           return minEle;
       }
       
     
       int pop(){
           
          
           if(s.empty())
           return -1;
           if(s.top()<minEle){
               int a=minEle;
               minEle=2*minEle-s.top();
               s.pop();
               return a;
           }
           else{
               int a=s.top();
               s.pop();
               return a;
           }
           
           
       }
       
      
       void push(int x){
           
           if(s.empty()){
           minEle=x;
           s.push(x);}
           else{
           if(x<minEle){
               s.push(2*x-minEle);
               minEle=x;}
           
           else
           s.push(x);}
           
       }
};

int main()
{
    Solution s;
    s.push(4);
    s.push(2);
    s.push(3);
    cout<<s.getMin()<<endl;
    s.push(1);
    s.push(5);
    s.push(6);
    cout<<s.getMin()<<endl;
    s.push(8);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    

    return 0;
}