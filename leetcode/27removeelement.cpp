#include<bits/stdc++.h>
using namespace std;
//brute force
/*int removeElement(vector<int>& nums,int val){
     int n=nums.size();
     int i=0;
     while(i<n){
        if(nums[i]==val){
            for(int j=i;j<n-1;j++){
                nums[j]=nums[j+1];//shift all elemnts to the left
            }
            n--;//one element is effectively removed
        }else{i++;}
     }
     return n;
}*/
// better approach using extra array
/*int removeElement(vector<int>& nums,int val){
    vector<int>temp;//create an temporary array to store the other elements
    for(int i=0;i<nums.size();i++){//iterate over the aarray
        if(nums[i]!=val){
            temp.push_back(nums[i]);//add elemnt to the temp array if not equal to value
        }
    }
    for(int i=0;i<temp.size();i++){//copy back the array to original array
        nums[i]=temp[i];
    }
    return temp.size();
}*/
//optimal approach using 2 pointers
int removeElement(vector <int>& nums,int val){
    int k =0;// 1st pointer to store the position of next valid element
    for(int i=0;i<nums.size();i++){// 2nd pointer to check every element
        if(nums[i]!=val){
            nums[k]=nums[i];//overwrites the element in place
            k++;//increment k to next index
        }
    }
    return k;
}
int main(){
    vector<int> arr={0,0,1,1,2,2,3,3};
    int val=2;
    int nums=removeElement(arr,val);
    cout<<"nums ="<<nums<<endl;
    for(int i =0;i<nums;i++){
        cout<<arr[i]<<" ";//return the array with remaining  elements
    }
    
    
    return 0;
}