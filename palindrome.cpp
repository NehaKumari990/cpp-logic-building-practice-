# include<iostream>
using namespace std;
int main(){
    int n,rev;
    cout<<"enter number: ";
    cin>>n;
    rev = 0;
    int original = n;

    while(n>0){
        int num = n%10;
       rev =rev*10+ num;
       n = n/10;
    }
    if(original==rev){
        cout<<"it is palindrome ";
    }
    else {
        cout<<"it is not a palindrome";
    }
}