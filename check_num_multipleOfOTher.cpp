 # include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==0 || b==0){
        cout<<"zero is not allowed";
    }
    else if(a%b==0){
        cout<<a <<" is multiple of "<<b;
    }
    else if(b%a==0){
        cout<<b <<" is multiple of "<< a;
    }
    else {
        cout<<a<<" and "<<b <<"are not multiple ";
    }
}