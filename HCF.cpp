# include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b;
    if(a>b){
        n=a;
    }
    else {
        n=b;
    }
    for(int i=n;i>=1;i--){
        if((a%i==0) && (b%i==0)){
            cout<<"HCF "<<"="<<i;
            break;
        }
    }

}