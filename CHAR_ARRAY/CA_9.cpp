//Diffrence between char arr and string//
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char arr[100];
    string str;

    cin>>arr;
    cin>>str;
    arr[2]='2';
    str[1]='\0';

    cout<<arr<<endl;
    cout<<str<<endl;
}