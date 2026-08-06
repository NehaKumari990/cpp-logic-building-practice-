# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<15){
        cout<<"cold";
    }
    else if(n>=15 && n<=30){
        cout<<"warm";
    }
    else {
        cout<<"hot";
    }
}