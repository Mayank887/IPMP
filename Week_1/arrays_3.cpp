#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
int MissingNumber(int  a[], int n) {
        // Your code goes here
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[a[i]-1]=1;
        }
        for(int i=0;i<n;i++){
            if(v[i]==0)
            return i+1;
        }}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  a[n-1];
        for(int i=0;i<n-1;i++)
        cin>>a[i];
        cout<<MissingNumber(a,n-1);
        
       
        
    }
	
	return 0;
}