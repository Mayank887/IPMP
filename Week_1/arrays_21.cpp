#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
  int equilibriumPoint(int a[], int n) {
        int s=0;
        
        for(long long i=0;i<n;i++){
            s+=a[i];
        }
        long long lsum=0;
        for(long long i=0;i<n;i++){
            lsum+=a[i];
            
            if(lsum-a[i]==s-lsum)
            return i+1;
        }
        return -1;
    
        // Your code here
    }
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  a[n];
        
        
            for(int j=0;j<n;j++)
            cin>>a[j];
        
        
        cout<<equilibriumPoint(a,n);
        
        
    }
	
	return 0;
}