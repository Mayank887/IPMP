
#include <iostream>
#include <stack>

using namespace std;

void nextgreater(int arr[],int n){
    int v[n];
    stack<int> s;
     for(int i=n-1;i>=0;i--){
            if(s.empty())
            v[i]=-1;
            else if(s.top()>arr[i])
            v[i]=s.top();
            else{
                while(!s.empty() && s.top()<=arr[i]){
                    s.pop();
                }
                if(s.empty())
                v[i]=-1;
                else
                v[i]=s.top();
                
            }
            s.push(arr[i]);
            
            
        }
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
    nextgreater(arr,n);
    }

    return 0;
}
