# include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
    n = abs(n);
    int num = n%10;
    if((n%7==0) || (num == 7)){
        cout<<"multiple of 7 or end with 7";
    }
    else {
          cout<<"not multiple of 7 or end with 7";
    }
}