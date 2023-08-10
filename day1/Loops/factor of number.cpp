#include<iostream>
using namespace std; 
int main(){
    int n,i,sum=0;
    cout<<"enter value of n";
    cin>>n;
    for(i=1;i<=n/2;i++){
        if(n % i == 0){
            sum= sum+i;
        }
    }
    sum=sum+n;
    cout<<sum;
    return 0;
}