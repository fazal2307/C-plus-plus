#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter value ";
    cin>>day;
    if(day == 1){
        cout<<"Mon";
    }else if( day == 2 ){
        cout<<"TUE";
    } else{
        cout<<"No day";
    }
    return 0;
}