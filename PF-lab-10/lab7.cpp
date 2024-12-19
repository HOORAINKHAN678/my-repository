#include <iostream>
using namespace std;
void calculatesumandproduct(int a,int b){
    int sum = a+b;
    int product=a*b;
    cout<<product<<endl;
}
int main(){
    int x=5,y=10;
    calculatesumandproduct(x,y);
    cout<<"orignal values after function call:x ="<<x<<"y ="<<y<<endl;
    return 0;
}