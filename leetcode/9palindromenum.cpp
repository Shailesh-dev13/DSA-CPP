#include<iostream>
using namespace std;
bool isPalindrome(int n){
    //initialize a revnum to store the reverse number
      int revNum=0;
      //initialize a dup to store the duplicate of the input num for comparision later
      int dup = n;
      //check while n>0 iterate
      while(n>0){

        int id=n%10;//extract the last digit of the number
        revNum=revNum*10+id;//build reverse number by appending the last digit
        n=n/10;//remove the last digit from the original number
      }
      //check if original number is equal to reverse
      if(dup==revNum){
        return true;
      }else{


    return false;
      }
}
int main(){
    int number=45654;
    if(isPalindrome(number)){
        cout<<number<<" is a palindrome number"<< endl;

    }else{
        cout<<number<<" is not a palindrome number"<<endl;
    }
    return 0;
}