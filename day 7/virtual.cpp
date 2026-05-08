#include<iostream>
using namespace std;
class player{
    public:
    virtual void show(){
        cout<<"player show functuon "<<endl;
    }
   
};
 class cricketer: public player {
        public:
        int a;
        void show(){
            cout<<"cricketer class show funtion"<<endl;
        }
    };


int main(){
    cricketer c1;
    c1.show();
    return 0;

}