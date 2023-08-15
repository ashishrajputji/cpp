//N=10,k<=5
#include<iostream>
using namespace std;
int main(){
    int buy;
    cout<<"Please specify number of candies you want to buy \n";
    cin>>buy;

    if(buy>=1 && buy<=5){
        cout<<"Number of CANDIES SOLD : "<<buy<<endl;
        cout<<"Number of CANDIES Left : "<<10-buy<<endl;
    } else {
        cout<<"INVALID NUMBER \n";
        cout<<"Number of CANDIES LEFT : "<<10;
    }
    return 0;
}