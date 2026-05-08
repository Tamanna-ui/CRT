#include<iostream>
using namespace std;
class employee{
    public:
    static int reg_no;
    employee(){
        reg_no++;
    }

    static void show(){
    cout<<"employee reg_no."<<reg_no<<endl;
}

};

int employee :: reg_no=103;
int main(){
    employee E1;
    employee E2;
    employee E3;
    employee E4;
    employee::show();
    
    



    
    
}