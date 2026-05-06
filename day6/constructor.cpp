#include<iostream>
using namespace std;
 class student{
    public:
    string name ;
    int rollno;
    student(){
        name="tamanna";
        rollno=89;

    }
    void show(){
        cout<<"name"<<name<<endl;
        cout<<"rollno"<<rollno<<endl;
        cout<<"the default constructor"<<endl;
        }

    

};
int main(){
    student s1;
    s1.show();
    return 0;

}