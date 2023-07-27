//Length function//
#include<iostream>
#include<string.h>
using namespace std;

int getLength(char arr[]){
    int length=0;
    for(int i=0;arr[i]!='\0';i++){
        length++;
    }
    return length;
}
int main(){
    char arr[50];
    int brr[100];
    int size2=sizeof(brr);
    cin>>arr;
    int size=sizeof(arr)/sizeof(char);
    cout<<getLength(arr)<<endl;
    cout<<strlen(arr)<<endl;
    cout<<size<<endl;
    cout<<size2;
}
