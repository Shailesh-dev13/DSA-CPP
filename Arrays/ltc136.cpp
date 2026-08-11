//single number
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int ans=0;
    vector<int> nums{1,2,3,4,1,2,3};
    for(int val:nums){
        ans=ans^val;
        
    }
    cout<<ans<<endl;
    return 0;
}