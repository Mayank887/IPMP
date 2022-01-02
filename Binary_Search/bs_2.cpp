#include <iostream>
#include <vector>

using namespace std;
    int binarysearch(vector<int> &v,int l,int r,int key){
        if(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==key)
                return mid;
            else if(v[mid]<key)
                return binarysearch(v,mid+1,r,key);
                else
                    return binarysearch(v,l,mid-1,key);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int index=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1)
            return binarysearch(nums,0,nums.size()-1,target);
        if(nums[0]==target)
            return 0;
        else if(nums[0]>target)
            return binarysearch(nums,index+1,nums.size()-1,target);
        else
            return binarysearch(nums,0,index,target);
        
    }

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<search(v,target)<<endl;

    return 0;
}