#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter value of x";
    cin>>x;
    switch(x){
        case 1: cout<<"one";
                break;
        case 2: cout<<"Two";
               break;
        case 3: cout<<"Three";
                break;
        case 4: cout<<"Five";
                break;
        case 5: cout<<"Six";
                break;
        case 6: cout<<"Seven";
                break;
        default : cout<<"Invalid Number";
}
    cout<<endl<<endl;
    cout<<"print value of x"<<x;
    return 0;
    }
