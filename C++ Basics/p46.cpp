//using functions
#include <iostream>
using namespace std;
//to check whether a number is prime or not
 bool isPrime(int m){
    if(m>=1){
        for(int i=2;i<m;i++){
            if(m%i==0){
                return false;
            }
        }
    }
    return true;
 }
 //to print all prime numbers between 2 to n
  void printPrime(int n){
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
  }
  int main(){
    cout<<isPrime(19)<<endl;
    printPrime(100);
    return 0;
  }
