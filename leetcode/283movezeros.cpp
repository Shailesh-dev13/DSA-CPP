#include<bits/stdc++.h>
using namespace std;
//better approach
/*
void moveZeroes(vector<int>& nums){
    int n=nums.size();
    vector<int>temp;
    //storing non zero element
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    //puting non zero elements back
    for(int i=0;i<temp.size();i++){
        nums[i]=temp[i];
    }
    //put zeros at the end
    for(int i=temp.size();i<n;i++){
        nums[i]=0;
    }
}*/
// optimal approach using 2 pointers
void moveZeroes(vector<int>& nums){
    int i=0;//1st pointer points to the position where next non zerro element go
    //putting all non zero elments at the front
    for(int j=0;j<nums.size();j++){//scan through array
        if(nums[j]!=0){
            nums[i]=nums[j];
            i++;
        }
    }
    //filling remaining positions with zero
    while(i<nums.size()){
        nums[i]=0;
        i++;
    }
}
int main() {
    

    vector<int> arr = {0,1,0,3,12};

    moveZeroes(arr);

    

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
/*
int main(){
    vector<int> arr={0,1,0,3,12};
    moveZeroes(arr);
    for (int x:arr){
        cout<<x<<" ";
    }

    return 0;
}*/