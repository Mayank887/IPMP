#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
 bool search(int** matrix, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==x)
            return true;
            if(matrix[i][j]>x)
            j--;
            if(matrix[i][j]<x)
            i++;
        }
        return false;
    }
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m>>x;
        int  **a;
        a=new int *[n];
        for(int i=0;i<n;i++){
            a[i]=new int[m];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
        
        
        cout<<search(a,n,m,x)<<"\n";
        
        
    }
	
	return 0;
}