#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};//2d arrays


    int rows=4;
    int columns=3;
    matrix[2][1]=14;
    //cout<<matrix[2][1];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
// taking input in a 2d array
int mat[4][3];
int row=4;
int col=3;
//input
for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin >> mat[i][j];
        }
        cout<<endl;
    }
//output
for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<< mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}