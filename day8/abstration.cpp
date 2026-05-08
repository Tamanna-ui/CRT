#include<iostream>
using namespace std;
class atm{
    private:
    int balance;
    public:
    atm(int balance) {
        this->balance=balance;

    };
    

    void withdraw(int amt){
        if(amt>balance){
            cout<<"insufficent balance";

        }
        else{
             balance-=amt;
             cout<<"the remaining amt is: "<<amt<<endl;
        }
       

    }
    void showbalance(){
        cout<<"the current balance"<<balance<<endl;
    }

};
int main(){
    atm a(5000);
    a.withdraw(500);
    a.showbalance();
}