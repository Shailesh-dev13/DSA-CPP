#include<bits/stdc++.h>
using namespace std;
/* brute force approach
int main(){
    int n=5;
    if(n==0){
        cout<<0;
    }
    else if(n==1){
        cout<<0<<" "<< 1;
    }
    else{
        int fib[n+1];
        fib[0]=0;
        fib[1]=1;

        for(int i=2;i<=n;i++){
            fib[i]=fib[i-1]+fib[i-2];

        }
        cout<<"The fibonacci series upto"<<n<<"th term:"<<endl;
        for(int i=0;i<=n;i++){
            cout<<fib[i]<<" ";
        }
    }
    return 0;
}*/
/* better approach
int main(){
    int n=5;
     if (n==0){
        cout<<"The fibonacci Series Up to "<< n<< "th term :"<<endl;
        cout<<0;
     }
     else{
        int secondlast=0;
        int last=1;

        cout<<"The fibonacci series up to "<<n<<"th term:"<<endl;
        cout<<secondlast<<" "<<last<<" ";
        int cur;
        for(int i=2;i<=n;i++){
            cur=last+secondlast;
            secondlast=last;
            last=cur;
            cout<<cur<<" ";
        }
     }
     return 0 ;
}*/

// optimal approach
int fibonacci(int n){
    //base case if n is 0 or 1, return n 
    if(n<=1){
        return n;
    }
    //recursive case => sum of n-1th and n-2th fabonacci numbers
    int last=fibonacci(n-1);
    int slast=fibonacci(n-2);

    return last + slast;
}


int main(){
    int n=4;
    cout<<fibonacci(n)<<endl;
    return 0;
}