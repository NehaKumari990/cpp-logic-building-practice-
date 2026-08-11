# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,r;
    cout<<"enter a and r : ";
    cin>>a>>r;
    for (int i = 1;i<= n;i++){
        cout<<a<<" ";
        a = a*r;
    }
}