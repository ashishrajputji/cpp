#include<iostream>
using namespace std;
int linear(int a[],int key){
    for(int i=0;i<6;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
int arr[] = {1,2,20,10,22,12};
int key,found;
cout<<"Enter Element to find : ";
cin>>key;
found  = linear(arr,key);
if(found == -1){
    cout<<"Element not found";
} else {
    cout<<"element found at index : "<<found <<endl;
}
    return 0;
}