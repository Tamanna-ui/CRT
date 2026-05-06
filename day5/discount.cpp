#include<iostream>
using namespace std;
void applydis(double &bill){
     bill=bill-(bill*0.10);
}
int main(){
    double bill;
    cout<<"then the bill amt";
    cin>> bill;
    applydis(bill);
    cout<<bill<<endl;
    
    return 0;
}