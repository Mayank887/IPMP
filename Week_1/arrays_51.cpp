#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 int maxProfit(int prices[],int n) {
        int maxprofit=0;
        int min=prices[0];
        for(int i=1;i<n;i++){
            int profit=prices[i]-min;
            if(profit>maxprofit)
                maxprofit=profit;
            if(prices[i]<min)
                min=prices[i];
        }
        return maxprofit;
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
        
       cout<<maxProfit(a,n);
    
        
    }
	
	return 0;
}