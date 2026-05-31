#include <iostream>
using namespace std;

void p1(int n){ // pyramid structure
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            cout<<" "<<" ";
        }
        for(int j = 0; j<2*i+1; j++){
            cout<<"*"<<" ";
        }
        for(int j = 0; j<n-i-1; j++){
            cout<<" "<<" ";
        }
        cout<<endl;
    }
}

void p2(int n){ //inverted pyramid structure
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            cout<<" "<<" ";
        }
        for(int j = 0; j<2*n - 2*i-1; j++){
            cout<<"*"<<" ";
        }
        for(int j = 0; j<i; j++){
            cout<<" "<<" ";
        }
        cout<<endl;
    }
}

void p3(int n){
    p1(n);
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<i; j++){
            cout<<" "<<" "<<" ";
        }
        for(int j = 0; j<2*(n-1) - 2*i-1; j++){
            cout<<"*"<<" ";
        }
        for(int j = 0; j<i; j++){
            cout<<" "<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter no. of rows"<<endl;
    int n;
    cin >> n;
    p1(n);
    cout<<endl;
    p2(n);
    cout<<endl;
    p3(n);
    return 0;
}