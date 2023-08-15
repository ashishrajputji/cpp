//First n even numbers , n is input from user
#include<iostream>
using namespace std;
int main(){
    int n;
    int total = 0;
    cout<<"Enter a number : \n";
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2 == 0){
            total = total + 1;
        }
        i++;
    }
    cout<<"Even number till "<<n<<" is "<<total;
    return 0;
}