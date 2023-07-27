//palindrome//
#include<iostream>
#include<string.h>
using namespace std;

bool palin(char arr[]){
    int s=0;
    int e=strlen(arr)-1;
    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }
        s++;
        e--;

    }
    return true;

}

int main(){
    char arr[50];
    cin>>arr;
    int hi=palin(arr);
    if(hi){
        cout<<"It is palin "<<endl;
    }
    else{
        cout<<"not a palin"<<endl;
    }

}
