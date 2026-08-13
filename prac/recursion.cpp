#include<iostream>
using namespace std;


// Print 1 to N using recursion
void print1n(int count,int n){
if(count>n) 
 return;
 cout<<count<<endl;
 print1n(count+1,n);
}
//print n to 1 using recursion
void printn1(int count){
if (count<1)
return;
cout<<count<<endl;
printn1(count-1);
}
//sum of first n numbers
int sumOfn(int n){
  if(n==1){
    return 1;
  }
  return n + sumOfn(n-1);
}
//factorial of a given number
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}


int main(){
    int n=10;
    print1n(1,n);
    cout<<"Printing 1 to N completed."<<endl;
    printn1(n);
    cout<<"Printing N to 1 completed."<<endl;
    
    cout<<"Sum of "<<n<<" natural number is:"<<sumOfn(n)<<endl;

    cout<<"Factorial of "<< n <<"! is "<<factorial(n);
    return 0;
}