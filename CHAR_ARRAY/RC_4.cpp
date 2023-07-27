//replace sring//
#include<iostream>
#include<string.h>
using namespace std;

void Replacestr(char arr[]){
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]==' '){
            arr[i]='!';
        }
    }
}



int main(){
    char arr[50];
    cin.getline(arr,50);
    Replacestr(arr);
    
    cout<<arr;
}
