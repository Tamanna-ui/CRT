#include<iostream>
using namespace std;
int coffeevol (int shots){
    return shots * 30;
}
int main(){
int shots;
cout<<"enter the no. of shots";
cin>>shots;
cout<<"volume of coffee:" << coffeevol(shots) << "ml "<<endl;

return 0;

}