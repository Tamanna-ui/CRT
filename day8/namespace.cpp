#include<iostream>
using namespace std;
 
namespace virat{
    void show(){
        cout<<"the is the part of RCB"<<endl;

    }
}
namespace rohit{
    void show(){
        cout<<"the is the part of MI";
        
    }
}
int main(){
    virat::show();
    rohit::show();

}