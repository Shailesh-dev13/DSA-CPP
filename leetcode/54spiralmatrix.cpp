#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& mat){
    vector<int>ans;//to store output matrix
    int m=mat.size(),n=mat[0].size();// m row size,n col size
    int srow=0,scol=0,erow=m-1,ecol=n-1;//initialize the staring row,column and ending row and column.
    while(srow<=erow && scol<=ecol){//if the starting row and staring column is less than end row and end column , otherwise it will start to over lap
        //top
        for(int j=scol;j<=ecol;j++){
           ans.push_back(mat[srow][j]);//row const 
        }
        //right
        for(int i=srow+1;i<=erow;i++){
           ans.push_back(mat[i][ecol]);//col const
        }
        //bottom
        for(int j=ecol-1;j>=scol;j--){
           
            if(srow==erow){//edge case for odd rows
                break;
            }
           ans.push_back(mat[erow][j]);
        }
        //left
        for(int i=erow-1;i>=srow+1;i--){
            
            if(scol==ecol){//edge case for odd columns
                break;
            }
           ans.push_back(mat[i][scol]);
    }
    srow++;erow--;scol++;ecol--;//to move to next row and columns
}
return ans;
}
int main() {
    

    vector<vector<int>> matrix = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    vector<int> result = spiralOrder(matrix);

    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}