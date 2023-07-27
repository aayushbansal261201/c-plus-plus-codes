#include<iostream>
using namespace std;

int main(){
    //creating pointer//
    int a=5;
    int *p=&a;
    //coping pointer//
    int *q=p;

    cout<<q<<endl;//adress of p
    cout<<*q<<endl;
      cout<<p<<endl;
       cout<<*p<<endl;
        cout<<&q<<endl;
         cout<<&p<<endl;
}