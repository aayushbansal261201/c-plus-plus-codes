#include<iostream>
#include<math.h>

using namespace std;

int power(int num){
    num=pow(2,num);
    return num;
}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)<<endl;


}