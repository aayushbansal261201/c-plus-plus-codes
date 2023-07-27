#include<iostream>
#include<string.h>
//lower case---> word-a+A
//upper case---> word-A+a;
using namespace std;


void Uppercase(char arr[]){

    for(int i=0;i<strlen(arr);i++){
            arr[i]=arr[i]-'A'+'a';
    }
}

void Lowercase(char arr[]){
    for(int i=0;i<strlen(arr);i++){
        arr[i]=arr[i]-'a'+'A';
    }
}
int main(){
    char arr[50];
    cin>>arr;
    //Uppercase(arr);
    //cout<<arr<<endl;
    Lowercase(arr);
    cout<<arr<<endl;

}
