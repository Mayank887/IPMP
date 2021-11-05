#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
    int max1s(int **a,int r,int c){
       int max=-1;
       int col=c-1;
       for(int i=0;i<r;i++){
           while(col>=0 && a[i][col]==1){
               max=i;
               col--;
           }
           
       }
       return max;
    }
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int **a;
        a=new int*[n];
        
        for(int i=0;i<n;i++){
            a[i]=new int [m];
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        
        
        cout<<max1s(a,n,m)<<endl;
        
    }
	
	return 0;
}