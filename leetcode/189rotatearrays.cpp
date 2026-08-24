#include<bits/stdc++.h>
using namespace std;

//brute force
/*void rotateRight(int arr[],int n,int k){
    if(n==0) return;
    k=k%n;
    int temp[k];
    for(int i=n-k;i<n;i++){
        temp[i-n+k]=arr[i];
    }
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}
void rotateLeft(int arr[],int n,int k){
    if(n==0) return;
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[n-k+i]=temp[i];
    }

}*/
//optimal approach
//helper fucntion
void reverseArray(vector<int>& nums,int start,int end){
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}
//fucntion to rotate array right
void rotate(vector<int>& nums,int k){
      int n=nums.size();
      //edge case:empty or no rotation
      
      k=k%n;
      if(n==0||k==0) return ;

      reverseArray(nums,0,n-1);//reverse the whoole array
      reverseArray(nums,0,k-1);//reverse first k elemnts
      reverseArray(nums,k,n-1);//reverse remainig n-k elemnts

      
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    
    int k=2;
    rotate(arr,k);
    for(int x: arr){
        cout<<x<<" ";
    }
    
    return 0;
}