//write a function to print intersection of 2 arrays using nested loops
#include <iostream>
using namespace std;  
void intersection(int arr1[],int size1,int arr2[],int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr1[]={7,2,3,4,5};
    int arr2[]={3,4,5,6,1};
    int size1=5;
    int size2=5;
    intersection(arr1,size1,arr2,size2);
     return 0;
}