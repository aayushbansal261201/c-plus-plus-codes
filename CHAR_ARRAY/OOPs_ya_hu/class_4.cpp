//Getters and setters//
#include<iostream>
using namespace std;

class Animal{

private:
   int weight;
public:
    int age;
    string name;




  int getWeight(){
    return weight;
  }
  void setWeight(int w){
    weight=w;
  }

};

int main(){
    Animal ramesh;
    ramesh.age=10;
    ramesh.name="yoyo";
    cout<<ramesh.age<<endl;
    cout<<ramesh.name<<endl;
    ramesh.setWeight(101);
    cout<<ramesh.getWeight()<<endl;
}