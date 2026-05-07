#include<iostream>
using namespace std;
class area {
    public:
    int length,breadth;
    double radius;
    area(int l,int b){
    length=l;
    breadth=b;

    }
    area(int r){
        length= r;
        breadth=r;
    }
    area(double r){
        radius=r;
    }
    void show(){
        cout<<"area of rectangle"<<length*breadth<<endl;
        cout<<"area of square"<<length*breadth<<endl;
        cout<<"area of circle"<<3.14*radius<<endl;
    }
};
int main(){
    area a1(4,5);
    a1.show();
    //  area a2(4);
    //  a2.show();
    return 0;

}

