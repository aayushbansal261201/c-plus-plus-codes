//function in classses//
#include<iostream>
using namespace std;

class Animal{
public:
    int age;
    string name;

void eat(){
    cout<<"Aayush bansal is genius"<<endl;
}

};

int main(){
    Animal ramesh;
    ramesh.age=10;
    ramesh.name="yoyo";
    cout<<ramesh.age<<endl;
    cout<<ramesh.name<<endl;

    ramesh.eat();
}