#include<iostream>
using namespace std;
int main(){
    char day;
    cout<<"Enter First character of day for Thrusday enter u and for saturday enter l \n";
    cin>>day;
    switch(day){
        case 's':
            cout<<"Sunday";
            break;
        case 'm':
            cout<<"Monday";
            break;
        case 't':
            cout<<"Tuesday";
            break;
        case 'w':
            cout<<"Wednesday";
            break;
            case 'u':
                cout<<"Thrusday";
                break;
            case 'f':
                cout<<"Friday";
                break;
            case 'l':
                cout<<"Saturday";
                break;
            default:
                cout<<"Inavild first character";
    }
    return 0;
}