# include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"no of rows : ";
    cin>>n;
    cout<<"no of columns : ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}