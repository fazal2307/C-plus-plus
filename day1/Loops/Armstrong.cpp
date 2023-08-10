#include<iostream>
using namespace std;
int main(){
    int n,r,m,sum=0;
    cout<<"Enter value of n";
    cin>>n;
    m = n;
    while(n>0){
        r = n % 10;
        n = n/10;
        sum =  sum +r*r*r;
    }
    if( m == sum){
        cout<<"its armstrong no";
    }
    else {
        cout<<"its not armstrong no";
    }
    return 0;
}
