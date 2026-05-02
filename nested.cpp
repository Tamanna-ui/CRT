#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter 1st number";
cin>>a;
cout<<"enter 2nd number";
cin>>b;
cout<<"enter 3rd number";
cin>>c;

if(a>b){
    if(a>c){
        cout<<"a is the largest"<<a;
    }
    else{
        cout<<"c is largest"<<c;
    }}
    else{
        if(b>c){
            cout<<"b is the largest no. "<<b;
        }
        else{
            cout<<"c is the largest"<<c;
        }
    }




}

