    //sum of numbers from 1 to n using while loop
    #include<iostream>
    using namespace std;
int main(){
    int n=5;
    int sum=0;
    while(n>0){
        sum=n+sum;
        n--;

    }
    cout<<"sum is: "<<sum<<endl;
    
   return 0;
}