# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows : ";
    cin>>n;
    // no of stars = n+1-i
    for(int i=1;i<=n;i++){
        // first i odd numbers
        // for(int j=1;j<=2*i-1;j+=2){
        //     cout<<j;
        // }


        // or 

        int a = 1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}