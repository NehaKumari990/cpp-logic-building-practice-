#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
     count = 0;
     
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        bool square = false;
        for(int j=1;j<=arr[i];j++){
            if(j*j==arr[i]){
                square = true;
            }
        }
        if(square==true){
            count++;
        }
    }
    cout<<count;
}
