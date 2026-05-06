#include<iostream>
using namespace std;
class student {
     private :
    int registration=456;
    public:
    string name;
    int rollno;
   

    void display(){
        cout<<"name"<<name<<endl;
        cout<<"rollno"<<rollno<<endl;
        cout<<"registration"<<registration<<endl;
        registration++;
    }


};
int main(){
    student s1;
    s1.name ="tamanna";
    s1.rollno=67;
    s1.display();
    return 0;

}