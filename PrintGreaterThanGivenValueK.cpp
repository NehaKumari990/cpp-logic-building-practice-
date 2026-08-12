#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"enter the value of k: ";
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(k<arr[i]){
            cout<<arr[i]<<" ";
        }
    }
    
}
