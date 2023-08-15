#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //for(int i=1;i<=5;i++){
        // if(i==1){
        //     cout<<"1";
        // } else{
        //     int p=1;
        //     for(int j=1;j<=i;j++){
        //         p = p*2;
        //     }
        //     cout<<" ,"<<p;
        // }

    //}
    // for(int i=0;i<=5;i++){
    // cout<<pow(2,i)<<" ";
    // }

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i==0 || j==0 || i==4 ||j==4){
            cout<<"* ";
        } else{
            cout<<"  ";
        }
    }cout<<"\n";
}
   
    return 0;
}