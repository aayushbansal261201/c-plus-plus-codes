#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *ptr=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<"hh"<<*ptr+2<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&a)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
}