#include<bits/stdc++.h>
using namespace std;
//brute force 
/*vector<int> majorityElement(vector<int>& nums){
vector<int> result;
for(int i=0;i<nums.size();i++){
    if(result.size()==0 || result[0]!= nums[i]){
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==nums[i]){
                count++;
            }
        }
        if(count>nums.size()/3)
        result.push_back(nums[i]);
    }
    if(result.size()==2)break;
}
return result;
}*/
// better approach- using hashmap
/*vector<int> majorityElement(vector<int>& nums){
vector<int> result;
unordered_map<int,int> mp;

int mini=(int)nums.size()/3+1;
for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
    if(mp[nums[i]]==mini){
        result.push_back(nums[i]);
    }
    if(result.size()==2){
        break;
    }
}
return result;
}*/
// optimal approach using moore's voting algorithm
vector<int> majorityElement(vector<int>& nums){
    int count1=0,count2=0;//initialize 2 counters
    int el1=INT_MIN,el2=INT_MIN;//initialize 2 elements to store mjority elements

    for( int i=0;i<nums.size();i++){//iterate the loop
        if(count1==0 && nums[i]!=el2){//check at first if the counter is zero and the element is not eqaul to the 2nd element
            count1=1;//if so then set counter 1
            el1=nums[i];//and store the element in el1
        }else if(count2==0 && nums[i]!= el1){//if the counter 2 is zero after iteration and the element is not equal to 1st element 
            count2=1;//then set counter 1
            el2=nums[i];//and store the element in el2
        }else if(nums[i]==el1){//then if similar elemnt found increase the counters
            count1 ++;
        }else if(nums[i]==el2){
            count2++;
        }else{// if different element found decrease the counter
            count1--; count2--;
        }
    }
    vector<int> ls;//manual check 
    count1=0,count2=0;//initialize counters
    for(int i=0;i<nums.size();i++){//iterate array
        if(el1==nums[i]) count1++;//check if the element is equal to previous stored element if yes then increase count
        if(el2==nums[i]) count2++;
    }
    int mini=(int) (nums.size()/3)+1;//find the minimum occurence so as to store it in the array
    if(count1>= mini) ls.push_back(el1); //if qualify then store it in list
    if(count2>= mini) ls.push_back(el2); 
    sort(ls.begin(),ls.end());//sort the list
    return ls;

}

int main(){
    vector<int> arr={11,33,33,22,33,11};
    vector<int> ans=majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;

}