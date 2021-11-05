#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
  void segregate0and1(int arr[], int n) {
        // code here
        int c0=0;
        int c1=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            c0++;
            else
            c1++;
        }
        for(int i=0;i<c0;i++)
        arr[i]=0;
        for(int i=c0;i<n;i++)
        arr[i]=1;
        
        
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
        
        
        segregate0and1(a,n);
        for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
        
        
    }
	
	return 0;
}