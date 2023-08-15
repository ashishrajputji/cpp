#include<iostream>
using namespace std;

int main(){
    // taking 1 one input from user and day name display 
    int day;
    cout<<"Enter day number \n";
    cin>>day;

    if(day == 1){
        cout<<"Sunday";
    } else if(day == 2){
        cout<<"Monday";
    } else if (day==3){
        cout<<"Tuesday";
    } else if(day==4){
        cout<<"Wednesday";
    } else if(day==5){
        cout<<"Thrusday";
    } else if(day==6){
        cout<<"Friday";
    } else if (day==7){
        cout<<"Saturday";
    } else {
        cout<<"Invalid input";
    }
    return 0;
}