//printing substring//
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=s.length();

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<s[j];
        }
    }
    cout<<endl;
}