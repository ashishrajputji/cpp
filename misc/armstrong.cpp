//check whether given number is armstrong number or not.
#include<iostream>
using namespace std;
int main(){
int num ;
int arm=0;
cout<< " Enter a number : ";
cin>>num;
int complete = num;
    while(num>0){
        int lastdigit  = num%10;
        arm = (lastdigit*lastdigit*lastdigit) + arm;
        num = num/10;
    }
    if(arm==complete){
        cout<<"\n Given number is armstrong number.";
    }
    else {
        cout<<"\n Not an armstrong number.";
    }
    return 0;
}