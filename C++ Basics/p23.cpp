//To check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n=14;
    bool isPrime=true;

    for(int i=2;i*i<=n;i++){//we can also run the loop from 2 to root2 rather than 2 to n-1 i.e. (i*i<=n) in place of (i<=n-1)
     if(n%i==0){//non prime
     isPrime=false;
     break;
     }
    }
     if (isPrime==true){
        cout<<"prime number\n";
     }else{
        cout<<"non prime number\n" ;    
     }
    
    return 0;
    }