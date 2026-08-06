# include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    if((a%2==0) && (b%2==0)){
        cout<<"both are even";
    }
    else if((a%2!=0) && (b%2!=0)){
        cout<<"both are odd";
    }
    else {
        cout<<"one even and one odd";
    }
}