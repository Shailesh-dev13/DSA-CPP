//write a function to calculate sum and product of all the elements in an array
#include <iostream>
using namespace std;
void sumAndpdt(int arr[],int size,int& sum,int& pdt){
   sum=0;
   pdt=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        pdt*=arr[i];
    }
      
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int sum,pdt;
    sumAndpdt(arr,size,sum,pdt);
    cout<<sum<<endl;
    cout<<pdt<<endl;
    return 0;
    
    
   
}