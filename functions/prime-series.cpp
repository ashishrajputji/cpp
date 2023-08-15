//2 3 5 7 11 .... n
#include<iostream>
using namespace std;

bool isPrime(int x){
    for(int i=2;i<x;i++){
        if(x%i == 0){
          return false;  
        }
    } return true;
}
 int main(){
  int n;
  cout<<"Enter number : ";
  cin>>n;
    for(int i=2;i<=n;i++){ //10
        if(isPrime(i)){
            cout<<i << " ";
        }
    }
  return 0;
 }