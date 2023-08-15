#include<iostream>
using namespace std;

int main(){
    int arr[5];
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"The maximum value is : "<<max;
    return 0;
}