#include<iostream>
using namespace std;
int main(){
    int n,digit;
    cin>>n;
    int oddSum = 0;
    int evenSum = 0;

while(n > 0){
    int digit = n % 10;

    if(digit % 2 == 0){
        evenSum = evenSum + digit;
    }
    else{
        oddSum = oddSum + digit;
    }

    n = n / 10;
}
cout<<"even digit sum: "<<evenSum<<"\n"<<"odd digit sum: "<<oddSum;
    
}