#include<iostream>
using namespace std; 
int main(){
    int n,s=0;
    cout<<"enter value of n\n";
    cin>>n;
    for( int i=0;i<=n;i++){
        s+=i;
        cout<<s;

    }
    return 0;
}