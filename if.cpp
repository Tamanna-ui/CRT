#include<iostream>
using namespace std;

int main(){
    int age ;
    cout<<"enter age:";
    cin>>age;
    if (age>100){
        cout<<"eligible to vote century";
    }
    else if(age>18&&age<99){
        cout<<"eligible to vote";
    }
    else if(age>0&&age<17){
        cout<<"not eligible for vote";
    }
    else if(age<0){
        cout<<"age is negative";
    }
    else{
        cout<<"invaild age";
    }
}

