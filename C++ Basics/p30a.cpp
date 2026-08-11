//floyd's triangle in charaters
#include <iostream>
using namespace std;
int main(){
  int n =4;
  char ch='A';
  for (int i=0;i<n;i++){
    for(int j= i+1;j>0;j--){//with backward inner loop
      cout<<ch<<" ";
      ch=ch+1;
    }
    cout<<endl;
  }
  return 0;
}