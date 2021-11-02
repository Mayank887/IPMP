#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
 void twoOddNum(int Arr[], int N,int b[])  
    {
        // code here
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<N;i++){
            m[Arr[i]]++;
            
        }
        for(auto i:m){
            if(i.second%2!=0)
            v.push_back(i.first);
        }
        if(v[1]>v[0]){
            int temp=v[0];
            v[0]=v[1];
            v[1]=temp;
        }
        b[0]=v[0];
        b[1]=v[1];
    }

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  a[n];
        int b[2];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        twoOddNum(a,n,b);
        cout<<b[0]<<" "<<b[1];
        
        
        
       
        
    }
	
	return 0;
}