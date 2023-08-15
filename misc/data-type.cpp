#include<iostream>
using namespace std;
int main(){
    //Integer data type
    short int num; //declaration
    num = 28; //initialisation
    long int second = 44; //decalaring and initializing in same line

    cout<<second<<endl;
    cout<<num<<endl;
//Character variables
    char my ;
    my = 'a';
    cout<<"Printing char variable here"<<endl;
    cout<<my<<endl;
//Float variable
float f;
f = 3.14;
cout<<f<<endl;
cout<<"Size of integer short "<<sizeof(num)<<endl;
cout<<"Size of integer long "<<sizeof(second)<<endl;
cout<<"Size of character "<<sizeof(my)<<endl;
cout<<"Size of float "<<sizeof(f)<<endl;
}