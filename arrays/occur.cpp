#include<iostream>
using namespace std;
int main(){
int arr[6];
int x, count = 0;
cout<<"Enter array items : ";
for(int i=0;i<6;i++){
    cin>>arr[i]; // 1 2 3 4 4 4 
}
cout<<"\n Enter value to find : ";
cin>>x; // 3 ans =1 // 0 ans =0

for(int i=0;i<6;i++){
    if(x==arr[i]){
        count = count +1;
    }
}
cout<<"Number of occurence of given element is : "<<count;
return 0;
}