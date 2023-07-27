#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char arr[]={'a','a','y','u','s','h'};
    int arr_size=sizeof(arr)/sizeof(char);
    string j="";
    int i;
    for(i=0;i<arr_size;i++){
        j=j+arr[i];
    }
    cout<<j<<endl;

}