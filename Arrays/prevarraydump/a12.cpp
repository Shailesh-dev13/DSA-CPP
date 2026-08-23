//brute force approach to calculate sum of all the subarrays of an array and find the maximum sum among them
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxSum= INT_MIN;
for(int st=0;st<n;st++){
   int currentSum=0;
    for(int end=st;end<n;end++){
        currentSum=currentSum+arr[end];
        maxSum=max(currentSum,maxSum);
        
    }
    
}
cout<<"maximum sum of subarray is:"<<maxSum<<endl;
return 0;
}