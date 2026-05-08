#include <iostream>

using namespace std;
class ATM
{
private:
    int balance;

public:
    void setbalance(int balance)
    {
        this->balance = balance;
    }
    // Withdraw Method of Atm
    void Withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
    }
    // Show Balance Method of Atm
    int getbalance()
    {
        return balance;
    }
};

int main()
{
    int n;
    cin>>n;
    ATM a;
    a.setbalance(n);
    cout<<"the balance is"<<a.getbalance()<<endl;
    a.Withdraw(500);
    cout<<"the balance is"<<a.getbalance()<<endl;

    return 0;
}
