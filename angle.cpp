# include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>0 && b>0 && (a+b)<180){
   int c = 180 - (a+b);
   cout<<"third angle : "<<c;
    }
    else {
        cout<<"invalid input";
    }
}