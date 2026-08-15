#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of element : ";
    cin>>n;
    
    int arr[n];
    int brr[n];
    int crr[n];
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"First Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    cout<<endl;
    cout<<"Second Array: ";
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<n;i++){
      crr[i] = arr[i] * brr[i];
}
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
}
