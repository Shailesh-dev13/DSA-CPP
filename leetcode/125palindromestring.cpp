#include<bits/stdc++.h>
using namespace std;
//brute force
/*
bool isPalindrome(string s){
    int left=0,right=s.length()-1;

    while(left<right){
        if(!isalnum(s[left]))
        left++;
        else if(!isalnum(s[right]))
        right--;
        else if(tolower(s[left])!=tolower(s[right]))
        return false;
        else{
            left++;
            right--;
        }
    }
    return true;
}

int main(){
    string str="ABCDCBA";
    bool ans=isPalindrome(str);

    if(ans==true){
        cout<<"palindrome";
    
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}*/
//optimal solution
bool palindrome(int i ,string& s){
    if(i>=s.length()/2) return true;

    if(s[i]!= s[s.length()-i-1]) return false;

    return palindrome(i+1,s);

}
int main(){
     string s="madam";

     cout<< palindrome(0,s);
     cout<<endl;
     return 0;
}