#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<a+b<<endl;
}
int sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}
int sum(int a){
    cout<<a+a<<endl;
}
int mul(int a){
    cout<<a*a<<endl;
}
int mul(double a){
    cout<<a<<endl;
}
int main(){
    sum(2);

    sum(2,3);

    sum(2,30,19);
    mul(10);
    mul(12.11);
    return 0;
}