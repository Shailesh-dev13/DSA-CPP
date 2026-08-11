   //sum of numbers from 1 to n
   #include<iostream>
    using namespace std;
int main(){
    int n=50;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;//if we add break statement in the loop example if(i==5 ) break; then the loop will not go until 50 it will break at 5 and the sum will be 1+2+3+4+5=15
    }
cout<<"sum is: "<<sum<<endl;
   return 0;
}