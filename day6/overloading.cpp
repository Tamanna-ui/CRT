#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    double avg;
    //parameterized constructor
    cricketer(string n , int r, double avg){
        name=n;
        runs=r;
        this->avg =avg;

    }
    //member function
    void show(){
        cout<<"name "<<name<<endl;
        cout<<"runs "<<runs<<endl;
        cout<<"avg "<<avg<<endl;
    }
};
int main(){
    cricketer c1("sachin",1000,58.9);
    c1.show();
}