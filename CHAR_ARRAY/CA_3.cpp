//length of the string//
#include<iostream>
using namespace std;
int main(){
    char name[100];
    cin>>name;
    int len=0;
    for(int i=0;name[i]!='\0';i++){
        len++;
    }
    cout<<"the length of the : "<<len<<endl;
}