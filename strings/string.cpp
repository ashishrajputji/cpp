#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string firstName;
    string lastName, fullName;

    cout<<"Please enter first name here : \n";
    getline(cin,firstName);
     cout<<"Please enter last name here : \n";
    getline(cin,lastName);

    fullName = firstName + " " + lastName;
    cout<<"Your full name is "<<fullName<<" and length of your name is : "<<fullName.length();
    cout<<"\n Value at index 5 is : "<<fullName[5];

    cout<<"\n";

    cout<<"The best youtube channel for coding is \'Code On Air\' ";
    return 0;
}