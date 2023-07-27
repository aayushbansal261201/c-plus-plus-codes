//compare two string//
#include<iostream>
#include<string.h>
using namespace std;


bool comparestring(char arr[],char brr[]){
    if(strlen(arr)!=strlen(brr)){
        return false;

    }
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]!=brr[i]){
            return false;
        }

    }
    return true;

    }

    int main(){
        char arr[50];
        char brr[50];
        cin>>arr>>brr;
        // cout<<arr<<endl;
        // cout<<brr<<endl;
        cout<<comparestring(arr,brr);

    }



