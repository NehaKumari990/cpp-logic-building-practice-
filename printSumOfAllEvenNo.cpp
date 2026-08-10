# include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter number: ";
    cin>>n;
    sum = 0;
    for(int i = 0;i<=n;i=i+2){
        sum = sum + i;
    }
    cout<<sum;
}