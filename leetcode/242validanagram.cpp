#include<bits/stdc++.h>
using namespace std;
//brute force
/*bool isAnagram(string s,string t){

if(s.length() !=t.length()){
    return false;
}
sort(s.begin(),s.end());
sort(t.begin(),t.end());

for(int i=0;i<s.length();i++){
    if(s[i]!=t[i]){
        return false;
    }
}
return true;
}*/
//optimal approach
bool isAnagram(string s,string t){
    if(s.length()!= t.length()){//check if the length of both strings are equal if no then return false
          return false;
    }
    int freq[26]={0};//initiaile a array with 26 size and with every element as 0
    for(int i=0;i<s.length();i++){//iterate the array once
        freq[s[i]-'A']++;//increase the freq of the elements encountered 
    }
    for(int i=0;i<t.length();i++){//iterate the other array
        freq[t[i]-'A']--;//decrease the freq of elements encountered
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0)//at last check the array if every element is 0 then return true -> the given arrays are anagram 
        return false;
    }
    return true;
}
int main(){
    string str1="INTEGER";
    string str2="GEREINT";
    if(isAnagram(str1,str2)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}
