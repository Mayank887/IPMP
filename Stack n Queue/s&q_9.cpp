
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

 vector<int> leftgreater(int arr[],int n){
        stack<pair<int,int>> s;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(s.empty())
            v[i]=-1;
            else if(s.top().first>arr[i])
            v[i]=s.top().second;
            else{
                while(!s.empty() && s.top().first<=arr[i])
                s.pop();
                
                if(s.empty())
                v[i]=-1;
                else
                v[i]=s.top().second;
            }
            s.push({arr[i],i});
        }
        return v;
    }
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> r=leftgreater(price,n);
       
       vector<int> v(n);
       for(int i=0;i<n;i++){
           v[i]=i-r[i];
           
       }
       return v;
    }
void display(vector<int> v ,int n){
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}




int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
   vector<int> v=calculateSpan(arr,n);
   display(v,n);
    
    }

    return 0;
}