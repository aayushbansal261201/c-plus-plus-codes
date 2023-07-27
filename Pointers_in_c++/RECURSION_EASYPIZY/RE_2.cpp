// FACTORIAL by recursion //

#include<iostream>
using namespace std;

int  facto(int n){
    //Base case-->
    if(n==1){
        return 1;
    }

    //R.C-->
    int badiproblem=n*facto(n-1);
    return badiproblem;
    
}

int main(){
    int n;
    cin>>n;

    int h=facto(n);
    cout<<h;
   // cout<<n;
}