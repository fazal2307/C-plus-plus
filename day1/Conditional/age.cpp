#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age :";
    cin>>age;
    if(age>=18 && age<=20){
        cout<<"Valid  age for marriage:";
    }else{
        cout<<"Not valid age for marriage :";
    }
    return 0;
}