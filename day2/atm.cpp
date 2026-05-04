#include <iostream>
using namespace std;
int main() 

{   int accbalance=8000;

    int amt;
    cout<<"enter the amount:";
    cin>>amt;
    if(amt>=20000){
        cout<<"excced daily limit";
        
    }
    
    else if(amt<0){
        cout<<"incorrect amt";
        
    }
    else if(amt>=accbalance){
        cout<<"unsufficient balance ";
    }
    else if(accbalance>=amt){
        cout<<"tranction successful";
    }
    else{
        cout<<"sever issue";
    }

    return 0;
}