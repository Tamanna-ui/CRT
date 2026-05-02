#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a num between 0-9:";
    cin>>a;
    switch (a)
    {
    case 1:
    cout<<"support";
        break;
    
        case 2:
    cout<<"biling";
        break;

        case 3:
    cout<<"technical support";
        break;

        case 4:
    cout<<"want to speak to agent";
        break;

       
    default:
    cout<<"invaild input";
        break;
    }

}