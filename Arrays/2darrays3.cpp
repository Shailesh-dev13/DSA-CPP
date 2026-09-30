#include<bits/stdc++.h>
using namespace std;
//Maximum Row sum
int getMaxSum(int mat[][3],int rows,int cols){
    int maxRowSum=INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSumI=0;
        for(int j=0;j<cols;j++){
            rowSumI+= mat[i][j];
        }
        maxRowSum=max(rowSumI,maxRowSum);
    }
    return maxRowSum;
}
//Max Column Sum
int main(){
    int matrix[4][3]={{1,2,30},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<getMaxSum(matrix,rows,cols)<<endl;
    return 0; 
}