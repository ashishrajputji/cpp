//reverse a given number
#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter a number : ";
   cin>>num;
    int rev = 0;
    while(num>0){
        int lastdigit = num%10; // getting lastdigit that is remainder
        rev = lastdigit + rev*10; // storing last digit inside reverse variable
        num = num/10; // reducing number that is number without lastdigit
    }
    cout<<"\n"<<rev;
    return 0;
}