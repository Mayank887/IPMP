#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <time.h>
using namespace std;
void shuffle(int arr[],int n){
    srand(time(0));
    for(int i=n-1;i>0;i--){
        int x=rand()%i;
        int temp=arr[i];
        arr[i]=arr[x];
        arr[x]=temp;
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
        
        shuffle(a,n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    
        
    }
	
	return 0;
}