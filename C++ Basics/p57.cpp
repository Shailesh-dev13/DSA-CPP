//write a funtion to reverse an integer n
#include<iostream>
using namespace std;
int revNum(int n){
    int rev=0;
    while(n>0){
    int digit=n%10;
    rev=rev*10+digit;
    n=n/10;

}
 return rev;  
}
int main(){
   int n=1254;
    cout<<"reversed:"<<revNum(n)<<endl;
    return 0;
}