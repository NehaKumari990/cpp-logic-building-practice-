#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(arr[i]+arr[j]==k){
    //             count = count + 1;
    //         }

    //     }
    // }
    // cout<<count/2;



     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count = count + 1;
            }

        }
    }
    cout<<count;
}
