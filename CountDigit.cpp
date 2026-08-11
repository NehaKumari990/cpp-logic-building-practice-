# include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"enter number: ";
    cin>>n;
    count = 0;
    if (n==0){
        count = 1;
        
    }
    while(n>0){
        int num = n%10;
       count = count+1;
       n = n/10;
    }
    cout<<count;
}