#include<iostream>
using namespace std;
class area{
    private:
    int length;
    int width;
    public:
    void setside(int l, int w){
        length=l;
        width=w;

    }
    friend void showarea(area a);
};
void showarea(area b){
    int area = b.length*b.width;
    cout<<"the area is:"<<area<<endl;
}
int main(){
    area a;
    a.setside(3,5);
    showarea(a);
    return 0;
    
}