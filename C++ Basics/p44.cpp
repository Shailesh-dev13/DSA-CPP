// calculate the sum of digitd of a number using function
#include <iostream>
using namespace std;
int sumOfdigits(int num){
    int digSum=0;
     while(num>0){
        int lastdigit=num%10;
        num/=10;
         
        digSum+=lastdigit;
     }
     return digSum;
}
int main(){
    cout<<"the sum of the digits is:"<<sumOfdigits(2356)<<endl;
    return 0;
}