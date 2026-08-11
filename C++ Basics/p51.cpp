//decimal to binary conversion
#include <iostream>
using namespace std;
int decTobinary(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
       int rem=decNum%2;
       decNum=decNum/2;
       ans+=(rem*pow);
       pow*=10;

    }
    return ans;//binary form of decimal number
}
int main(){
    int decNum=50;
    cout<<decTobinary(decNum)<<endl;
    for(int i=0;i<=10;i++){ 

        cout<<decTobinary(i)<<endl;
    }
    return 0;
}