#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
  void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0)
	        c++;
	    }
	    int i=0;
	    for(int j=0;j<n;j++){
	        if(arr[j]!=0){
	        arr[i]=arr[j];i++;}
	    }
	    for(int j=0;j<c;j++){
	        arr[i]=0;
	        i++;
	    }
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
        
        
        pushZerosToEnd(a,n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        
    }
	
	return 0;
}