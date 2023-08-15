#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number "<<endl;
    cin>>num;

    if(num%2 == 0){
        cout<<"Given input is even number";
    } else {
        cout<<"Given input is odd number";
    }
    return 0;
}