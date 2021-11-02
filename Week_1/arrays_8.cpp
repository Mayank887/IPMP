#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
 int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int c=0;
        auto it=s.begin();
        for(int i=0;i<n;i++){
            it=s.find(sum-arr[i]);
            if(it!=s.end() && *it!=arr[i])
            c++;
            
        }
        if(c==0)
        return -1;
    return c/2;
        
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
        cout<<Countpair(a,n,6);
        
        
    }
	
	return 0;
}