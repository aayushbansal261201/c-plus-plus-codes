//Revesion of char array and string//
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch[5];
    cin>>ch;
    cout<<ch<<endl;
    cout<<strlen(ch)<<endl;
    for(int i=0;i<strlen(ch)+1;i++){
       cout<<"index at"<<i<<" value: "<<ch[i]<<endl;
    }
     int value=(int)ch[5];
    cout<<"null :"<<value<<endl;
    
}

