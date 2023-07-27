#include<iostream>
using namespace std;


// void evenodd(int n){
//     if(n%2==0){
//         cout<<"Number is even"<<endl;
//     }
//     else{
//         cout<<"number is odd"<<endl;
//     }
// }
bool isEven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num;
    cin>>num;
if(isEven(num)){
    cout<<"even";
}
else{
    cout<<"odd";
}
}
    