//write a function to swap min and max in an array
#include <iostream>
using namespace std;
void swapMaxmin(int arr[],int size){
    int mini=0;
    int maxi=0;
    for(int i=0;i<size;i++){
      if(arr[i]<arr[mini]){
        mini=i;
      }
      if(arr[i]>arr[maxi]){
        maxi=i;
      }
    }
    swap(arr[mini],arr[maxi]);
}
int main(){
    int arr[]={1,-8,7,5,6,4,9};
    int size=7;
    swapMaxmin(arr,size);
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
    
     return 0;

}