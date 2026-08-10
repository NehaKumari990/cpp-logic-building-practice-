# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        for(int i=1;i<=n;i++){
            cout<<i;
        }
        cout<<endl;
    }
}