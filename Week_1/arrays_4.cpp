#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
 vector<int> singleNumber(int a[],int n) 
    {
        // Code here.
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(auto i:m){
            if(i.second==1)
            v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        return v;
    }

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<int> v(2);v=singleNumber(a,n);
        for(auto i:v)
        cout<<i<<" ";
        
        
       
        
    }
	
	return 0;
}