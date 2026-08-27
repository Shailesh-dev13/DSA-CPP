#include<bits/stdc++.h>
using namespace std;
//brute force
 /*vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
    vector<int>ans;
for (int i=0;i<nums1.size();i++){
    for(int j=0;j<nums2.size();j++){
        if(nums1[i]==nums2[j]){
            bool alreadyPresent=false;
            for(int x:ans){
                if(x==nums1[i]){
                    alreadyPresent=true;
                    break;
                }
            }
            if(!alreadyPresent){
                ans.push_back(nums1[i]);
            }
            break;
        }
    }
}
return ans;
 }*/
//better approach - sorting and  two pointers

 /*vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    vector<int>ans;
    int i=0;
    int j=0;
    while(i<nums1.size() && j< nums2.size()){
        if(nums1[i]<nums2[j]){
            i++;
        }else if(nums1[i]>nums2[j]){
            j++;
        }else{
            if(ans.empty()|| ans.back()!= nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
 }*/
//optimal approach using unordered set cause unique elemnt to return
 vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
 unordered_set<int> st(nums2.begin(),nums2.end());//create an unordered set and store nums2 in it
 vector<int> ans;//create another array to store answer
 for(int num :nums1){//iterate through nums1 and check
    if(st.count(num)){//check whether num exists in the set
        ans.push_back(num);//if element exists in both array add to num
        st.erase(num);//erase the element from set so it doesn't repeat again
    }
 }
 return ans;
 }


 int main(){
   vector <int> arr1={1,3,4,4,5,6};
   vector <int> arr2={2,3,4,4,7,8,9};
    

    vector<int> inter=intersection(arr1,arr2);
    cout<<"intersection of array 1 and 2 is:";
    for(int val:inter){
        cout<<val<<" ";
    }return 0;
}