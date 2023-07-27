//compare two string//
#include<iostream>
using namespace std;

bool comparestr(string arr,string brr){
    if(arr.length()!=brr.length()){
        return false;
    }
    for(int i=0;i<arr.length();i++){
        if(arr[i]!=brr[i]){
            return false;
        }
    }
    return true;
}




int main(){
    string arr="brrr";
    string brr="brrr";
    cout<<comparestr(arr,brr);

}
