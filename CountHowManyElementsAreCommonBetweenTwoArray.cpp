#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of element of first array : ";
    cin>>n;
    int m;
    cout<<"enter no of element of second array : ";
    cin>>m;
    
    int arr[n];
    int brr[m];

    int count = 0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"First Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    cout<<endl;
    cout<<"Second Array: ";
    for(int i=0;i<m;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    for (int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i]==brr[j]){
            count = count + 1;
            break;
        }
    }
}
cout<<count;
}
// for normal/non-duplicate case