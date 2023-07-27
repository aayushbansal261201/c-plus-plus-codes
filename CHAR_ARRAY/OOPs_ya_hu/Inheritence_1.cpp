//Inheritance//
#include<iostream>
using namespace std;

class Animal{
    public:
    int look;
    int heigth;

    void yoyo(){
        cout<<"Aayush bansal is genius"<<endl;
    }
};

class Dog:public Animal{

};
int main(){
    Dog d;
    d.yoyo();
}