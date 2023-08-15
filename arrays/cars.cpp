#include<iostream>
#include<string>

using namespace std;
int main(){
    string brand[5];
    //input 
    for(int i=0; i<5;i++){
        cout<<"Enter car name : ";
        cin>>brand[i];
    }
    //output
    for(int i=0;i<5;i++){
        cout<<brand[i]<<"\n";
    }
   
    return 0;
}