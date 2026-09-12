#include<bits/stdc++.h>
using namespace std;
//using hashmaps
/*bool isIsomorphic(string s, string t){
    map<char,char> m1,m2;//create 2 maps
    if(s.size()!=t.size()) return false;//check if the size of both strings are equal or not
  for(int i=0;i<s.size();i++){//iterate through strings
   if (m1.find(s[i])!=m1.end()){//check if the element is already present in map
    if(m1[s[i]]!= t[i]){//if the element mapped is not equal 
        return false;
    }
   }else if(m2.find(t[i])!=m2.end()){//check if the element is already present in reverse map
    if(m2[t[i]]!=s[i]){
        return false;}
   }else{
    m1[s[i]]=t[i];//map the element of 1st string to elemnt of 2nd string
    m2[t[i]]=s[i];//map the element of 2nd string to element of first string
   }
  }
  return true;
}*/
//using arrays
bool isIsomorphic(string s,string t){
    int m1[256]={0},m2[256]={0};//arrays to store last seen position of character in s and t
    for(int i=0;i<s.size();i++){//traverse each character of the string
        if(m1[s[i]]!=m2[t[i]]) return false;//if previous position of current character is not equal
      // update the position with current index +1
        m1[s[i]]=i+1;
        m2[t[i]]=i+1;
    }
return true;
 
}
int main(){
    string str1="fog";
    string str2="dog";

if(isIsomorphic(str1,str2)){
    cout<<"strings are isomorphic"<<endl;
}else{
    cout<< "strings are not isomorphic"<<endl;
}

    return 0;
}