#include<iostream>
using namespace std;
void increment(int num){
    num++;
}   
int main(){
    int x=5;
    cout<<"before increment:x="<<x<<endl;
    increment(x);
    cout<<"after increment:x="<<x<<endl;
    return 0;
}
