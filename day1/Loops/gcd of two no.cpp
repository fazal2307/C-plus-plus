#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter value of 2 no";
    cin>>n>>m;
    while(m!=n){
        if(m>n){
            m = m-n;
        }
        else if(n>m){
            n = n-m;
        }
    }
    cout<<m;
    return 0;
}