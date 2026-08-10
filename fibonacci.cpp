# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a = 1,b = 1,sum = 0;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n-2;i++){
        sum = a + b;
        a = b;
        b = sum;
            cout<<b<<endl;

    }
    //cout<<b;
}