// copy Constructor//
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
  void setWeight(int weight){
    this->weight=weight;
  }

  //constructor//
  Animal(){
    cout<<"Me hu constructor"<<endl;
  }
//Parametriced constructor//
Animal(int age){
    this->age=age;
    cout<<"parametriced he me re"<<endl;
}

//copy constructor//
Animal(Animal &obj){
    this->age=obj.age;
    this->weight=obj.weight;
    cout<<"Me hu copy bhaiyo"<<endl;
}

Animal(int age,int weigth){
    this->age=age;
    this->weight=weight;
    cout<<"double he me"<<endl;
}
~Animal(){
    cout<<"bhai me to maar gaya"<<endl;
}
};

int main(){
    // Animal ramesh;
    // ramesh.age=10;
    // ramesh.name="yoyo";
    // cout<<ramesh.age<<endl;
    // cout<<ramesh.name<<endl;
    // ramesh.setWeight(101);
    // cout<<ramesh.getWeight()<<endl;
//     Animal a(10);
//     Animal *b=new Animal(10,20);

//     Animal c(a);
// }
Animal a;

}