#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<&a+1<<endl;

    cout<<ptr+1<<endl;
    
    //cout<<a+1;
    cout<<*ptr+1;
}