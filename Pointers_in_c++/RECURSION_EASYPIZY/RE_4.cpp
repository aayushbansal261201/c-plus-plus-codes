//fibonacci series//
#include<iostream>
using namespace std;

int fibo(int n){
    //BC
    if(n==1){
        return 0;

    }
    if(n==2){
        return 1;
    }

    //RR
    int fib=fibo(n-1)+fibo(n-2);
    return fib;
}




int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}