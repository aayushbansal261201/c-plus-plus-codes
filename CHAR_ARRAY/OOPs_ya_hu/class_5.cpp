//dynamic memory//
//Getters and setters//
#include<iostream>
using namespace std;

class Animal{
public:
int age;
string type;

void genius(){
    cout<<"Aayush bansal is genius"<<endl;
}


};

int main(){
    Animal* suresh=new Animal;
    (*suresh).age=15;
    (*suresh).type="toyo";
    cout<<(*suresh).age<<endl;
    cout<<(*suresh).type<<endl;


    //Alternative//
    suresh->age=20;
    suresh->type="kutta";
    cout<<suresh->age<<endl;
    cout<<suresh->type<<endl;

    (*suresh).genius();

   
}