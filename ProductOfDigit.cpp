# include<iostream>
using namespace std;
int main(){
    int n,prod;
    cout<<"enter number: ";
    cin>>n;
    prod = 1;
    if (n==0){
        prod = 0;
        
    }
    while(n>0){
        int num = n%10;
       prod = prod * num;
       n = n/10;
    }
    cout<<prod;
}