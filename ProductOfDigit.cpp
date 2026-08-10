# include<iostream>
using namespace std;
int main(){
    int n,prod;
    cout<<"enter number: ";
    cin>>n;
    prod = 1;
    while(n>0){
        int num = n%10;
        int num1 = n/10;
        prod = prod * num;
    }
    cout<<prod;
}