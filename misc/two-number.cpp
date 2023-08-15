#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter First number to compare \n";
    cin>>a;
    cout<<"Enter Second number to compare \n ";
    cin>>b;
    if(a>b){
        cout<<"First Number is greater than second ";
    } else {
        cout<<"Second Number is greater.";
    }
    return 0;
}