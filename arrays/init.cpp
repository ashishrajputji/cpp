#include<iostream>
using namespace std;
int main(){
    string employ[3] = {"Rahul","Ashish","Samritti"};
    string surname[] = {"Rajput","Patel","Kumari"};

    for(int i=0;i<3;i++){
        cout<<employ[i]<<" "<<surname[i]<<", ";
    }
    return 0;
}