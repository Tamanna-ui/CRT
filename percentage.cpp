#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"enter your percentage " ;
    cin>>n;
    if(n>=90&&n<100)
    {
        cout<<"Grade A";
    }
    else if(n>=80&&n<=89){
        cout<<"Grade B";
    }
    else if(n>=70&&n<=79){
        cout<<"Grade B";
    }
    else if(n>=60&&n<=69){
        cout<<"Grade B";
    }
    else{
        cout<<"Fail";
    }
}