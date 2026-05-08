#include<iostream>
using namespace std;
class player 


{
    public:
    string name;
    int age;
    void setname(string n){
        name=n;

    }
};
class cricekter: public player{
    public :
    int runs;
    void setrun(int r){
        runs=r;
        
        
    }

};
int main(){
    c1.setname("virat");
    c1.setrun(1200);
    c1.show();

    footballer f1;
    f1.setname("sunil");
    f1.setgoals(85);
    f1.show();
    return 0;

}