#include<bits/stdc++.h>
using namespace std;
/*int peakIndexInMountainArray(vector<int>& arr){
 int peak=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[peak]){
               peak=i;
            }
            }
        
        return peak;
}*/
int peakIndexInMountainArray(vector<int>& arr){
    int st=0,end=arr.size()-1;
    while(st<end){
      int  mid=st+(end-st)/2;
      if(arr[mid]>arr[mid+1]){//if mid is greater than the next element
        end=mid;//search the left 
      }else{//search right
        st=mid+1;
      }
    }
    return st;
}
int main(){
    vector<int> arr={0,10,5,2};
    int ans=peakIndexInMountainArray(arr);
    cout<<"The Peak Index In Mountain Array is:"<<ans<<endl;
    return 0;
}