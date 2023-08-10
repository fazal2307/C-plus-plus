#include<iostream>
using namespace std;
int main(){
    cout<<"Menu\n";
    cout<<"1.add\n"<<"2.Sub\n"<<"3.Mul\n"<<"4.divi\n";
    int option;
    cout<<"Enter your choice\n";
    cin>>option;
    int a,b,c;
    cout<<"Enter two value\n";
    cin>>a>>b;
    switch(option){
        case 1:c=a+b;
            break;
        case 2:c=a-b;
            break;
        case 3:c=a*b;
            break;
        case 4:c=a/b;
            break;
    }
    cout<<"Calculated value\n"<<c;
    return 0;

}