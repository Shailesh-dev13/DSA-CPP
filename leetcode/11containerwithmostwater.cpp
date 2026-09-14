#include<bits/stdc++.h>
using namespace std;
//brute force 
/*int maxArea(vector<int>& height){
    int maxWater=0;
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int w=j-i;
            int ht=min(height[i],height[j]);
            int currMax=w*ht;
            maxWater=max(currMax,maxWater);
        }
    }
    return maxWater;
}*/
//optimal solution - using two pointer approach
int maxArea(vector<int>& height){
     int lp=0,rp=height.size()-1,maxWater=0;//intialize 2 pointers one from the front and one from the back of the array and a avriable to store maxarea of water
   while(lp<rp){
   int w=rp-lp;//find the width of the container
   int ht=min(height[lp],height[rp]);//height will be determined from minimum of both the heigths
   int currWater= w* ht;// calculate the water stored
    maxWater=max(currWater,maxWater);// store the max of pre stored and currwater into maxwater
   height[lp]<height[rp]? lp++: rp--;//if the height of lp is less than the height of rp increment the lp else decrement the rp
   }
   return maxWater;

}
int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
    int ans=maxArea(arr);
    cout<<"The max area of water is: "<<ans<<endl;
    return 0;
}