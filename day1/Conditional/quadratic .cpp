#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter value:";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d == 0){
        cout<<"real and equal"<<(-b/(2*a));
    }else if(d>0){
        cout<<"real and unequal"<<(-b+ sqrt(d)/(2*a)) << " and " << (-b - sqrt(d)) / (2.0 * a) << endl;
    }else {
        cout<<"Imaginary";
    }
    return 0;
}
