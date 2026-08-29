#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n){
    if(x==0){return 0;}// check the corner cases 
    if(n==0 || x==1){return 1.0;}
     long long binForm=n;//initialize binForm = n
     if(n<0){//in case the n is negative power
        x=1/x;
        binForm=-binForm;
     }
     double ans=1;//initiate ans = 1
     while(binForm>0){//while loop to check if  the n is greater than 0
        if(binForm%2==1){//if binary is 1 
            ans*=x;//multiply x to answer
        }
        x*=x;//square x 
        binForm/=2;//divide binary form by 2
     }
     return ans;
}
int main(){
    double x=2;
    int n=8;
    cout<< myPow(x,n);
    return 0; 
}