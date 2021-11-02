#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
  bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int f=A[i];
            int x=i+1;
            int y=n-1;
            while(x<y){
                int sum=f+A[x]+A[y];
                if(sum==X)
                return true;
                if(sum>X)
                y--;
                if(sum<X)
                x++;
            }
        }
        return false;
    }

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<find3Numbers(a,n,7)<<"\n";
        
        
    }
	
	return 0;
}