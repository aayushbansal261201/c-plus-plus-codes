//encapsulation//
#include<iostream>
using namespace std;


class Animals{
    private:
    int age;
    int weigth;

    public:
    void eat(){
        cout<<"Aayush bansal is genuius"<<endl;
    }

    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age=a;
    }
};

int main(){

    Animals a;
    a.setAge(40);
    cout<<a.getAge();


    
}