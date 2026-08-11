 //find if a number is power of 2 or not without using loops using bit manupulation
    #include<iostream>
    using namespace std;
    bool isPowerOfTwo(int n){
        if(n<=0)return false;
        return (n & (n-1))==0;
    }
    int main(){
        int n;
        cout<<"enter the number:";
        cin>>n;
        if(isPowerOfTwo(n))
        cout<<"yes, it is a power of 2";
        else    
        cout<<"no, it is not a power of 2";
        return 0;
    }