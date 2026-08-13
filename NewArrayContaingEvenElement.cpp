#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"New Array: ";
    
    int j=0;
    int brr[n];
    for(int i=0;i<n;i++){
       if(arr[i]%2==0){
        brr[j]=arr[i];
        j++;
       }
    }
    int m = j;
    for(int i=0;i<m;i++){
        cout<<brr[i]<<" ";
    }
}