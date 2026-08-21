#include<bits/stdc++.h>
using namespace std;
//brute force approach
/*int removeDuplicates(vector<int>& nums){
    vector <int> expectedNums;
    expectedNums.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        if (nums[i]!=nums[i-1]){
            expectedNums.push_back(nums[i]);

        }
    }
    for(int i=0;i<expectedNums.size();i++){
        nums[i]=expectedNums[i];
    }
    return expectedNums.size();
}*/
//better approach using sets
/*
int removeDuplicates(vector<int>& nums){
    set<int> st;
    for(int x:nums){
        st.insert(x);
    }
    int i=0;
    for(int x:st){
        nums[i]=x;
        i++;
    }
    return i;
}
*/
//optimal approach using 2 pointers
int removeDuplicates(vector<int>& nums){
    int i=0;//1st pointer to keep track of last unique element
    for(int j=1;j<nums.size();j++){//2nd pointer to find new unique elemnt
        if(nums[j]!=nums[i]){//to check if the current element is duplicate or unique
            i++;//if unique increment i 
            nums[i]=nums[j];//overwrites duplicate position with unique value
        }
    }
    return i+1;//returns the number of unique elements
}


int main(){
    vector<int> arr={0,0,1,1,2,2,3,3};
    int nums=removeDuplicates(arr);
    cout<<"nums ="<<nums<<endl;
    for(int i =0;i<nums;i++){
        cout<<arr[i]<<" ";//return the array with unique elements
    }
    
    
    return 0;
}