// counting //
#include<iostream>
using namespace std;

void countings(int n){
    //Base case//
    if(n==0){
        return;
    }

    // processing//
    cout<<n<<" ";

    //Recursive relation//
//    int choti=countings(n-1);
//     int badiproblem=choti;

//     return badiproblem;

countings(n-1);

}

int main(){
    int n;
    cin>>n;

    countings(n);
    //cout<<endl;


}
