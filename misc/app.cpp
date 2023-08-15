#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if(age<18){
        if(age>=16){
            cout<<"You can watch Netflix only and PogoTv ";
        } else {
            cout<<"Go and watch PogoTv";
        }
    } else {
        cout<<"You can watch anything rated 18+ or not.";
    }
    return 0;
}