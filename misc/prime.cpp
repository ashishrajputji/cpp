#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Please enter a number \n";
    cin>>num;
    if(num==2){
        cout<<"Prime Number";
    }
    for(int i=2;i<num;i++){
        if(num % i == 0){
            cout<<"Number is non-prime";
            break;
        } else {
            cout<<"prime number";
            break;
        }
    }
    return 0;
}