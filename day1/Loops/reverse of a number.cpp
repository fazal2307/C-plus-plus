#include<iostream>
using namespace std;
int main(){
    int r,n, rev=0;
    cout<<"Eenter value of n\n";
    cin>>n;
    while(n>0){
        r = n%10;
        n = n/10;
        rev = rev*10+r;
    }
    cout<<"Reverse of no\n"<<rev;
    return 0;

}