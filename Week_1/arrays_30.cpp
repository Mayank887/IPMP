#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
  void sort(int arr[], int n) {
        // code here
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            c0++;
            else if(arr[i]==1)
            c1++;
            else
            c2++;
        }
        for(int i=0;i<c0;i++)
        arr[i]=0;
        for(int i=c0;i<c0+c1;i++)
        arr[i]=1;
        for(int i=c0+c1;i<n;i++)
        arr[i]=2;
        
        
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
        
        
        sort(a,n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        
        
    }
	
	return 0;
}