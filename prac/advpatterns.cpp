#include<iostream>
using namespace std;

void pattern11(int n){
    int start = 1;
       for (int i=0;i<n;i++){
        if(i %2 == 0)start=1;
        else start=0;
        for(int j=0;j<=i;j++){
        cout<<start;
        start=1-start;
       }
       cout<<endl;
}
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    for(int j=i;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
    space-=2;
    }
}

void pattern17(int n){

    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=(2*i+1);j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}

void pattern18(int n){
    
    for(int i=0;i<n;i++){
        for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++){
            cout<<ch;     
        }
        cout<<endl;   
    }
}
void pattern20(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n)star=2*n-i;
        
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)space-=2;
        else space +=2;
    }
}


int main(){
    int N =5;

    pattern11(N);
    cout<<"pattern11 DONE!"<<endl;
  
    pattern7(N);
    cout<<"pattern7 DONE!"<<endl;

    pattern8(N);
    cout<<"pattern8 DONE!"<<endl;

    pattern9(N);
    cout<<"pattern9 DONE!"<<endl;

    pattern12(N);
    cout<<"pattern12 DONE!"<<endl;

    pattern17(N);
    cout<<"pattern17 DONE!"<<endl;

    pattern18(N);
    cout<<"pattern18 DONE!"<<endl;

    pattern20(N);
    cout<<"pattern20 DONE!"<<endl;

    return 0;

    

}