#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
 int missingNumber(int arr[], int n) 
    { 
        // Your code here
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int a=*max_element(s.begin(),s.end());
        for(int i=1;i<=a;i++){
            if(s.find(i)==s.end())
            return i;
        }
        return a+1;
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
        cout<<missingNumber(a,n)<<"\n";
        
        
    }
	
	return 0;
}