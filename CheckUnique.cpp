#include<iostream>
using namespace std;
int main(){
    int n,idx;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    bool unique = true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i= 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                unique = false;
                break;
            }
        }
    }
    if(unique == true ){
        cout<<"unique";
    }
    else {
        cout<<"Not unique";
    }
}