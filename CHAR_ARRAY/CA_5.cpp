#include<iostream>
#include<string.h>
using namespace std;

void ReverseStr(char arr[]){
    int s=0;
    int n=strlen(arr);
    int e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }

}

int main(){
    char arr[50];
    cin>>arr;
    ReverseStr(arr);
    cout<<arr;    
}