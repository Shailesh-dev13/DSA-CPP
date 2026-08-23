#include<bits/stdc++.h>
using namespace std;
 int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.length()-1;i>=0;i--){//loop starts from the last index
            if(s[i]==' '&& count==0){//if last index is space then skip and continue
                continue;
            }
            if(s[i]==' ' && count>0){//if again word space detected then break and increment the count
                break;
            }
            count++;
        }
         return count;
    }
int main(){
    string str="hello world I am stark ";
    cout<<lengthOfLastWord(str);
    return 0;
}    