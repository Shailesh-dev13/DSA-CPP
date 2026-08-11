//write a function to print all the unique values in an array using nested loops
#include <iostream>
using namespace std;
void isUnique(int arr[],int size){
    for(int i=0;i<size;i++){
    bool isUnique=true;
     for(int j=0;j<size;j++){
        if(i!=j && arr[i]==arr[j]){
            isUnique=false;
            break;
        }
     }
     if(isUnique){
        cout<<arr[i]<<" ";

     }
    }
    

}
int main(){
    int arr[]={1,2,3,4,3,5,2};
    int size=7;
    isUnique(arr,size);
     return 0;
}