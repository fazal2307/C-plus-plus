#include<iostream>
using namespace std;
int main(){
    float billamount;
    float discount =0.0;
    cout<<"Enter billamount\n";
    cin>>billamount;
    if(billamount>=500){
        discount=billamount*20/100;
    } else if(billamount>=100 && billamount<500){
        discount=billamount*10/100;
    }
    cout<<"bill amount is:\n"<<billamount;
    cout<<"discoutn:\n"<<discount;
    cout<<"discounted amount is:\n"<<billamount-discount;
    return 0;
    }