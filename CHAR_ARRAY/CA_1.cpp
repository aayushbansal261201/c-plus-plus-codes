#include<iostream>
using namespace std;

int main(){
    char name[4];
    cin>>name;
    cout<<name<<endl;

    for(int i=0;i<4;i++){
        cout<<"index "<<i<<"value :"<<name[i]<<endl;
    }
    int value=(int)name[5];
    cout<<"null :"<<value<<endl;
}