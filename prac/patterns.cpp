/*Patterns*/

#include<iostream>
using namespace std ;

void pattern1(int n){
    
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<"*";
        }
        cout<<endl;
      }
      
}
void pattern2(int n){
    
      for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        cout<<"*";
        }
        cout<<endl;
      }
      
}

void pattern3(int n){
    
      for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
        cout<<j;
        }
        cout<<endl;
      }
      
}

void pattern4(int n){
    
      for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        cout<<(i+1);
        }
        cout<<endl;
      }
      
}


void pattern5(int n){
    
      for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        cout<<"*";
        }
        cout<<endl;
      }
      
}

void pattern6(int N){
    
      for(int i=0;i<N;i++){
        for(int j=N;j>i;j--){
        cout<<(N-j+1);
        }
        cout<<endl;
      }
      
}


void pattern10(int n){
    
      for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        cout<<"*";
        }
        cout<<endl;
      }

        for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
        cout<<"*";
        }
        cout<<endl;
      }     
}

void pattern13(int N){
  int num = 1;
    
      for(int i=0;i<=N;i++){
        for(int j=0;j<i;j++){
        cout<<(num)<<" ";
        num++;
        }
        cout<<endl;
      }
      
}

void pattern14(int n){
      for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
        cout<<ch;
        
        }
        cout<<endl;
      }
      
}

void pattern15(int N){
  
    
      for(int i=0;i<N;i++){
        for(char ch='A';ch<='A'+(N-i-1);ch++){
        cout<<(ch);
        
        }
        
        cout<<endl;
      }
      
}

void pattern16(int n){
    char ch='A';
      for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        cout<<(ch);
        }
        ch+=1;
        
        cout<<endl;
      }
      
}



int main(){
    int N=5;

    pattern1(N);
    cout<<"pattern1 DONE!"<<endl;

    pattern2(N);
    cout<<"pattern2 DONE!"<<endl;

    pattern3(N);
    cout<<"pattern3 DONE!"<<endl;

    pattern4(N);
    cout<<"pattern4 DONE!"<<endl;

    pattern5(N);
    cout<<"pattern5 DONE!"<<endl;

    pattern6(N);
    cout<<"pattern6 DONE!"<<endl;

    pattern10(N);
    cout<<"pattern10 DONE!"<<endl;

    pattern13(N);
    cout<<"pattern13 DONE!"<<endl;

    pattern14(N);
    cout<<"pattern14 DONE!"<<endl;

    pattern15(N);
    cout<<"pattern15 DONE!"<<endl;

    pattern16(N);
    cout<<"pattern16 DONE!"<<endl;

    return 0;
}

