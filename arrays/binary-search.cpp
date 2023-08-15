#include<iostream>
using namespace std;

int Binary(int a[],int key,int n){
    int s=0;
    int l=n-1;

    while(s<=l){
        int mid = (s+l)/2;
        if(a[mid]>key){
            s = mid+1;
        } 
        else if(a[mid]<key){
            l = mid-1;
        } else if(a[mid]==key){
            return mid;
        }
    } return -1;
}
int main(){
    int n,found;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n],key;
    cout<<"\n Enter array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n Enter element to find : ";
    cin>>key;
found  = Binary(arr,key,n);
if(found == -1){
    cout<<"\n Element not found ";
} else {
    cout<<"\n Element found at index : "<<found;
}
    return 0;
}
