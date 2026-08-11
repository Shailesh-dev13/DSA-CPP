//type conversion
#include<iostream>
using namespace std;
int main(){
    //type conversion is implicit done by compiler
   char grade='A';//ascii value of A is 65
   int value=grade;
   //type casting is explicit done by programmer
   double price=100.99;
   int newprice=(int)price;//the double is converted into integer
   cout<<value<<endl;
   cout<<newprice<<endl;
    return 0;
}
