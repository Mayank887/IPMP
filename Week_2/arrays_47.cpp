#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
  	  int majorityElement(int a[], int size)
    {
     
        int index=0;
        int count=1;
        for(int i=1;i<size;i++){
            if(a[i]!=a[index])
            count--;
            else
            count++;
            if(count==0){
                count=1;
                index=i;
            }
        }
        int c=0;
        for(int i=0;i<size;i++){
            if(a[i]==a[index])
            c++;
        }
        if(c>size/2)
        return a[index];
        return -1;
        
    }
            
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
       cout<<majorityElement(a,n);
    
        
    }
	
	return 0;
}