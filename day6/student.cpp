#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno ;//data members
    int marks ;
    //member function
    void display(){
        cout<<"name"<<name<<endl;
        cout<<"roll.no :"<<rollno<<endl;
        cout<<"marks :"<<marks<<endl;
    }};
    int main(){
        student s1;
        s1.name="tamanna";
        s1.rollno = 67; 
        s1.marks=89;
        s1.display();
        
    }