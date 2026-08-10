# include<iostream>
using namespace std;
int main(){
    int n,fact;
    cout<<"enter number: ";
    cin>>n;
    fact = 1;
    for(int i = 2;i<=n;i=i+1){
        fact = fact * i;
    }
    cout<<fact;
}