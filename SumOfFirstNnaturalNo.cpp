# include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter number: ";
    cin>>n;
    sum = 0;
    for(int i = 1;i<=n;i=i+1){
        sum = sum + i;
    }
    cout<<sum;
}