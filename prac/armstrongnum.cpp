#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int k=to_string(n).length();
    int sum=0;
    int cpy=n;
    while(n>0){
        int id=n%10;
        sum=sum+pow(id,k);
        n=n/10;
    }
    return cpy==sum ;// returns true if equals
}
int main(){
    int n=9474;

   if(isArmstrong(n)){
    cout<<n<<" is an armstrong number"<<endl;
   }else{
    cout<<n<<" is not an armstrong number"<<endl;
   }

    return 0;
}