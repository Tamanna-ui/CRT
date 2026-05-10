#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1= "hello";
    string str2="jecrc";
    cout<<str1<<" "<<str2<<endl;

    //method of strings

    // length of string

    int n = str1.length();
    cout<<"length of string"<<n<<endl;
    //append
    cout<<"after appending the string is: "<<str1.append("student")<<endl;
    //concatinate

    cout<<"after concate of the string "<<str1+"bacho"<<endl;
     cout<<"after concate of the string "<<str1<<endl;

    //push back() 
    str2.push_back('!');
    cout<<"after puch back"<<str2<<endl;

    //pop back
    str2.pop_back();
    cout<<"after pop back :"<<str2<<endl;

    //find
    int index= str1.find("ello");
    cout<<"after find "<<index<<endl;

    //swap

    str1.swap(str2);
    cout<<"after swaping the str "<<endl;
    cout<<"str1"<<str1<<endl;
    cout<<"str2"<<str2<<endl;

    //sub str
    string substr = str2.substr(5,6);//5 is the index and 6 is total length of substring 
    cout<<"substring: "<<substr<<endl;

    //getline 
    string str3;
    //cin>>str
    getline(cin,str3);
    cout<<"you entered"<<str3<<endl;
    



}
