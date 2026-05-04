#include<iostream>
using namespace std;
int main
(){
    char alpha;
    cout<<"enter the char: ";
    cin>>alpha;
    switch(alpha){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o' :
        case 'O':
        case 'u':
        case 'U':
        cout<<"this is vowel"<<endl;
        break;
        default:
        cout<<"this is consonant";
        
    }
}