#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
 int getOddOccurrence(int arr[], int n) {
        // code here
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.second%2!=0)
            return i.first;
        }
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
        cout<<getOddOccurrence(a,n);
       
        
    }
	
	return 0;
}