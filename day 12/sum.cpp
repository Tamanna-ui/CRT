#include<iostream>
using namespace std;
int sum (int x){
    if (x==1)
    return 1;

    return sum(x-1)+x; 
}
int main(){
    int n;
    cin>>n;
    cout<<"sum of "<<n<<" term is"<<sum(n)<<endl;
}