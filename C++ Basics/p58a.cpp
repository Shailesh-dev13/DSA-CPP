 //find if a number is power of 2 or not without using loops using  shift operator
 #include<iostream>
 using namespace std;
 bool isPowerOfTwo(int n){
  if(n<=0)return false;
  while(n>1){
    if(n&1){
        return false;
    }
    n=n>>1;
  }
  return true;
 }
 int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  if(isPowerOfTwo(n))
    cout<<"yes, it is a power of 2";
  else
    cout<<"no, it is not a power of 2";
     
    return 0;
 }

  