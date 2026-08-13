#include<iostream>
using namespace std;
int main(){
    int n,idx;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"enter the value u want to find: ";
    cin>>k;
    bool found = false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            found = true;
             idx = i;
             break;
        }
    }
    if (found == true){
        cout<<"first occurrence of given number is at "<<idx;
    }
    else{
        cout<<"it is not found.";
    }

    
}
