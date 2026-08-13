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
    
    int i = 1;
    int j = n-1;
    while(i<j){
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i++;
       j--;

    }
     i = 0;
     j = n-1;
    while(i<j){
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i++;
       j--;

    }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}