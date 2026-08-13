#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of element : ";
    cin>>n;
    
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Another Array: ";
    for(int i=0;i<n;i++){
        brr[i] = arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }

}