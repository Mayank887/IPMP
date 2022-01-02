
#include <iostream>

using namespace std;
void merge(int a[],int b[],int m,int n,int r[]){
    int i=0;
    int j=0;
    int k=0;
   
    while(i<m && j<n){
        if(a[i]==b[j]){
            r[k]=a[i];
            k++;
            r[k]=b[j];
            k++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            r[k]=a[i];
            i++;
            k++;
        }
        else{
            r[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<m){
        r[k]=a[i];
        k++;
        i++;
    }
    while(j<n){
        r[k]=b[j];
        k++;
        j++;
    }
    
}

int main()
{
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
    cin>>a[i];
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    int r[m+n];
    merge(a,b,m,n,r);
    for(int i=0;i<m+n;i++)
    cout<<r[i]<<" ";
    cout<<endl;
    
    

    return 0;
}