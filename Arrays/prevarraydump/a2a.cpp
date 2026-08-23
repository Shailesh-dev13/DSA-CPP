//index of smallest number and largest number in an array
#include <iostream>
using namespace std;
int main(){
    int nums[]={5,15,22,1,-15,-24};
    int size=6;
    int indexOfSmallest=0;
    int indexOfLargest=0;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
     for(int i=0;i<size;i++){
        
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
        if(nums[i]==smallest){
            indexOfSmallest=i;
        }
        if(nums[i]==largest){
            indexOfLargest=i;
        }
     }
     
     
     cout<<"smallest index="<<indexOfSmallest<<endl;
     cout<<"largest index="<<indexOfLargest<<endl;
    return 0;
}