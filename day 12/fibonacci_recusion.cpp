#include<iostream>
using namespace std;
int fibn(int x){
    if(x== 1)
    return 1;
    if (x==0)
    return 0;


    return fibn(x-1)+fibn(x-2);


}
int main(){
    int n;
    cin>>n;
    cout<<"fibonacci of "<<n<<" is "<<fibn(n)<<endl;

}