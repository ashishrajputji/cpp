#include<iostream>
using namespace std;
int main(){
    int weight;
    cout<<"Enter weight of clothes \n";
    cin>>weight;

    if(weight>=0 && weight<=2000){
        cout<<"Time Estimated: 25 Minutes";
    } else if(weight>=2001 && weight<=4000){
        cout<<"Time Estimated: 35 Minutes";
    } else if(weight>4000 && weight<=7000){
        cout<<"Time Estimated: 45 Minutes";
    } else {
        cout<<"INVALID INPUT";
    }
}