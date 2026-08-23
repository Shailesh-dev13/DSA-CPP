//pair sum optimal approach using hash map
#include <iostream>
#include <vector>
//#include <algorithm>
using namespace std;
vector<int>pairSum(vector<int>nums,int target){
    //sort(nums.begin(),nums.end());
    vector<int>ans;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
     return ans;
            }

        
    

int main(){
    vector<int>num={3,2,4};
    int target=6;
    
vector<int>ans=pairSum(num,target);
cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}