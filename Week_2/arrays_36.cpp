#include <iostream>
#include <vector>

using namespace std;
void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int arr[n][n];
        for(int j=0;j<n;j++){
            for(int i=n-1;i>=0;i--){
                arr[j][n-1-i]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=arr[i][j];
            }
        }
        
    }

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<vector<int>> matrix(n,v);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
            
        }
        rotate(matrix);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }

    return 0;
}