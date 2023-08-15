#include<iostream>
using namespace std;

int main(){
    int num;
    int fib = 1;
    cout<<"Enter number \n";
    cin>>num;
    cout<<"\n";
    while(num!=0){
        fib = fib*num;
        cout<<num<< "\n";
        num--;
    }
    cout<<"Fibonacci series is "<<fib<<endl;
    return 0;
}