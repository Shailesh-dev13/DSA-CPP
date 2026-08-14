#include<bits/stdc++.h>
using namespace std;
// count all digits of a number 
int countDigits(int n){
    int cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}
/*optimal approach
 int countDigits(int n){
 int cnt=(int)(log10(n)+1);
 return cnt;
 }*/
//GDC of Two Numbers

/*int findGdc(int n1,int n2){
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    return gcd;
}*/
/*better approach*/
/*int findGcd(int n1,int n2){
for(int i= min(n1,n2);i>0;i--){
if(n1%i==0 && n2%i==0){
return i;
}}
return 1;}*/
/*optimal approach - Euclidean Algorithm*/

int findGcd(int a, int b){
    //continue loop as long as both and b are greater than 0
    while(a>0 && b>0){
        //if a>b subtract b from a and update a
        //update remainder to a
        if(a>b){
            a=a%b;
        }
        // if b is greater than subtract a from b and update b
          // update remainder to b
        else{
            b=b%a;
        }
    }
    //check if a becomes 0,return b as gcd 
    if(a==0){
        return b;
    }
    //if a not zero return a as the gcd
    return a;

}
//Print all divisors
/*
vector<int> getDivisors(int n){
    vector<int> res;

    for (int i=1;i<=n;i++){
        if(n%i==0){
            res.push_back(i);
        }
    }
    return res;
 
}*/
vector <int> getDivisors(int n){
    vector<int> res;
    for (int i=1;i*i<=n;i++){
        //check if i divides n
        if(n%i==0){
            res.push_back(i);

         //if n/i is different from i, add n/i 
         if(i !=n/i){
            res.push_back(n/i);
         }
        }
}
return res;
}
//check for prime
//brute force
/*
bool checkPrime(int n){
    int cnt=0;
for(int i=1;i<=n;i++){
    if(n%i==0) cnt++;
}
if(cnt==2) {return true ;}
else {return false;}
}*/

// optimal solution
bool checkPrime(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            
        if(n/i!=1){
            cnt++;
        }    
        }
    }
    if(cnt==2){
        return true;
    }else{
        return false;
    }

}

int main(){
    int n=2664;

    cout<<"The number of digits in "<<n<<" are:"<<countDigits(n)<<endl;
  
    bool isPrime=checkPrime(n);
    if(isPrime){
        cout<<n<<" is a prime number"<<endl;
    }else{
        cout<<n<< " is not a prime number"<<endl;
    }
     vector<int> result=getDivisors(n);
   cout<<"Divisors of "<<n<<":";
   for(int val:result){
    cout<<val<<" ";
    
   }
   cout<<endl;

   int n1=20 ,n2=15;
   int gcd= findGcd(n1,n2);
   cout<<"GCD of "<<n1<<" and "<<n2<<" is :"<<gcd<<endl;

    return 0;
}
