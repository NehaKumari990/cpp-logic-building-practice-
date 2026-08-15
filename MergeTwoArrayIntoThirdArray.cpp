#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter no of elements for First array : ";
    cin>>n;

    cout<<"Enter no of elements for second array : ";
    cin>>m;

    int arr[n];
    int brr[m];

    bool same = true;

    cout<<"Enter first array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"First Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Enter second array: ";
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    cout<<"Second Array: ";
    for(int i=0;i<m;i++){
        cout<<brr[i]<<" ";
    }

    cout<<endl;
     int crr[n+m];
    // copy first array
    for(int i=0;i<n;i++){
        crr[i] = arr[i];
    }
    
    // copy second array
    for(int j=0;j<m;j++){
        crr[n+j] = brr[j];
    }

    cout<<endl;
    cout<<"Third Array: ";
    for(int k=0;k<m+n;k++){
        cout<<crr[k]<<" ";
    }
}