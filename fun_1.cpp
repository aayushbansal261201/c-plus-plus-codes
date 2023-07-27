#include<iostream>
#include<math.h>
using namespace std;

// int power(int a,int b){
//     return pow(a,b);
// }
int power(int a,int b){
int ans=1;
for(int i=0;i<b;i++){
    ans=ans*a;
}
return ans;
}

int main(){
    int c,d;
    cin>>c>>d;
   // int ansq=power(c,d);
    cout<<"the power is "<<power(c,d)<<endl;
    


}