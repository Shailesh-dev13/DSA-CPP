#include<bits/stdc++.h>
using namespace std;
//diagonal sum
int diagonalSum(int matrix[][4],int rows,int cols){
    int Sum;
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                Sum+=matrix[i][j];
            }else if(j==cols-i-1){
                Sum+=matrix[i][j];
            }
        }
    }
    return Sum;
}
int main(){
 int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows=4;
    int cols=4;
    cout<<diagonalSum(matrix,rows,cols);
    return 0;
}