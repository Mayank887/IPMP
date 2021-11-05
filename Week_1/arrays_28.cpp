#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
    void segregateEvenOdd(int arr[], int n) {
	    // code here
	   int a[n];
	   
	   for(int i=0;i<n;i++){
	       a[i]=arr[i];
	   }
	   sort(a,a+n);
	   int index=0;
	   for(int i=0;i<n;i++){
	       if(a[i]%2==0)
	       arr[index++]=a[i];
	   }
	   for(int i=0;i<n;i++){
	       if(a[i]%2!=0)
	       arr[index++]=a[i];
	   }
	    
	}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        segregateEvenOdd(a,n);
        for(int i:a)
        cout<<i<<" ";
        
        
        
        
        
    }
	
	return 0;
}