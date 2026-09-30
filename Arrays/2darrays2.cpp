#include<bits/stdc++.h>
using namespace std;
pair<int,int> linearSearch(int mat[][3], int rows,int cols,int key){// we must specify the column as compiler needs this info to acess the elements of 2d arrays correctly
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        if(mat[i][j]==key){
            return {i,j};
        }
        }
    }
    return {-1,-1};
}


int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4;
    int cols=3;
    int key=34;
    pair<int,int> result=linearSearch(matrix,rows,cols,key);
    cout<< result.first<< result.second;
    

    return 0;
}