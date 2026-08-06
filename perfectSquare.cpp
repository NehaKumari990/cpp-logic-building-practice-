# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool answer = false; 
    if(n<0){
        cout<<"not perfect sqaure";
    }
    else {
        for(int i=1;i*i<=n;i++){
            if(i*i==n){
                cout<<"perfect square";
                answer = true;
                break;
            }
            
        }
        if(!answer){
            cout<<"not perfect square";
        }
    }
}