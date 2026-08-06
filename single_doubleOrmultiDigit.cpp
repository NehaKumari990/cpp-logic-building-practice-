# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    n = abs(n); // negative ko positive bana dega
    if(n>=0 && n<=9){
        cout<<"single digit";
    }
    else if(n>=10 && n<=99){
        cout<<"double digit";
    }
    else {
        cout<<"multi digit";
    }
}