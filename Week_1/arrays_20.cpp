#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
    vector<int> duplicates(int arr[], int n) {
        // code here
        
        vector<int> v;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=0;
        
        }
        for(int i=0;i<n;i++){
            a[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(a[i]>1)
            v.push_back(i);
        }
        if(v.size()==0)
        v.push_back(-1);
        return v;
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
        
        vector<int> v=duplicates(a,n);
        for(int i:v)
        cout<<i<<" ";
        cout<<endl;
        
        
        
        
        
    }
	
	return 0;
}