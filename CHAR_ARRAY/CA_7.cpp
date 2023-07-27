#include<iostream>
#include<string.h>

using namespace std;

bool Palindrom(char arr[]){
    int s=0;
    int n=strlen(arr);
    int e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{
            s++;
            e--;
            
        }
        

    }
    return true;
}
int main(){
    char arr[100];
    cin>>arr;

if(Palindrom(arr)){
    cout<<"ITS palin"<<endl;
}
else{
cout<<"not a drom";
}


}