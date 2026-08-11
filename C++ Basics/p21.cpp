// sum of all odd numbers from 1 to n using while loop
    #include<iostream>
    using namespace std;
int main(){
    int n=10;
    int oddSum=0;
    while(n>0){
     if(n%2!=0){
        oddSum=n+oddSum;
 }
    n--;
    }
    cout<<"sum is\n" <<oddSum<<endl;
    return 0;
}