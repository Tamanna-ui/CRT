#include<iostream>
using namespace std;
//base class or parent class
class players{
    public:
    string name;
    int age;

    void setname(string n){
        name =n;
    }

};
//derived class or child class
class cricketer:public players{
    public:
    int runs;
    void setrun(int r){
        runs=r;

    }
    void show(){
        cout<<"name"<<name<<endl;
        cout<<"runs"<<runs<<endl;
    }



};

int main(){
    int r;
    cin>>r;
    cricketer c1;
    c1.setname("virat");
    c1.setrun(56);
    c1.show();
    return 0;

}
