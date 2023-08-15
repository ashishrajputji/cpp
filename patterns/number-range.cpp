//Print all number between 0 - n, n is number entered by user
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter a number : ";
    cin>>n;

    int i=n;
    while(i>=0){
        cout<<i<<" ";
        i--;
    }
    // int i=n;
    // do{
    //     cout<<i<<" ";
    //     i--;
    // }while(i>=0);
    
    return 0;
}