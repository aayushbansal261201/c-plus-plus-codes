//calulating length//
#include<iostream>
using namespace std;

int Getlength(char arr[]){
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    return len;
}

int main(){
    char arr[50];
    cin.getline(arr,50);
    int n=Getlength(arr);
   int s=0;
   int e=n-1;
   while(s<e){
    swap(arr[s++],arr[e--]);
   }
   cout<<arr;

    }