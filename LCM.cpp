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
    for(int i=n;;i++){
        if((i%a==0) && (i%b==0)){
            cout<<"LCM "<<"="<<i;
            break;
        }
    }

}