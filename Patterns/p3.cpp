#include <iostream>
using namespace std;

void p1(int n){
    for(int i = n; i>0; i--){
        for(int j = 0; j<i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void p2(int n){
    for(int i = n; i>0; i--){
        for(int j = 0; j<i; j++){
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }
}

void p3(int n){
    for(int i = n; i>0; i--){
        for(int j = 0; j<i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter no. of rows: "<<endl;
    int n;
    cin>> n;
    p1(n);
    p2(n);
    p3(n);
    return 0;
}