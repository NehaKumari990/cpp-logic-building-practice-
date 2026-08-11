# include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter number: ";
    cin>>n;
    sum = 0;
    int original = n;
    
    while(n>0){
        int num = n%10;
       sum = sum + num*num*num;
       n = n/10;
    }
    if(original==sum){
        cout<<"Armstrong number";
    }
    else {
        cout<<"Not Armstrong number";
    }
}