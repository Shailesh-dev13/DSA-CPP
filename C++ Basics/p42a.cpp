//to calculate n factorial using function
#include <iostream>
using namespace std;
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    cout<<"the factorial is:"<<factorial(5)<<endl;
}