#include<iostream>
using namespace std;
int mina(){
    int year;
    cout<<"Enter  year:\n";
    cin>>year;
    if(year % 4 == 0){
        if(year % 100 == 0 ){
            if(year % 400 == 0)
                cout<<year<<" is leap year";
             else 
                cout<<year<<"is not ";
        } else {
            cout<<year<<"leap year";
        }
    } else{
        cout<<year<<"not leap year";
    }
    return 0;
}