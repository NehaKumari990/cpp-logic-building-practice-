# include<iostream>
using namespace std;
int main(){
    int n,rev;
    cout<<"enter number: ";
    cin>>n;
    rev = 0;
    if (n==0){
        rev = 0;
        
    }
    while(n>0){
        int num = n%10;
       rev =rev*10+ num;
       n = n/10;
    }
    cout<<rev;
}