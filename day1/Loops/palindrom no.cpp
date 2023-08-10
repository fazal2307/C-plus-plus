#include<iostream>
using namespace std;
int main(){
    int r,n,m,rev=0;
    cout<<"Enter value of no\n";
    cin>>n;
    m = n;
    while(n>0){
        r = n%10;
        n=n/10;
        rev = rev*10+r;
    }
    if(rev == m){
        cout<<"Number is palindrom"<<m;
    }
    else {
        cout<<"Number is not palindrom"<<m;
    }
    return 0;
}