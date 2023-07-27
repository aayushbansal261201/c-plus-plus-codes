//Lower case to uppercase// // upper to lower//
#include<iostream>
#include<string.h>
using namespace std;

 void ConLowtoUpp(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'a'+'A';
    }

 }
 void ConUpptoLow(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'A'+'a';
    }
 }

int main(){
    char arr[100];
    cin>>arr;
   // ConLowtoUpp(arr);
   ConUpptoLow(arr);

    cout<<arr;
}