#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter  no of element : ";
    cin>>n;
    
    int arr[n];
    bool sorted = true;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sorted = false;
            break;
        }

    }
    if(sorted==false ){
        cout<<"Not sorted in ascending order";
    }
    else {
        cout<<" sorted in ascending order";
    }


}