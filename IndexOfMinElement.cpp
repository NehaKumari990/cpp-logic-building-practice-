#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    int minIdx = -1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
            minIdx = i;
        }
    }
    cout<<minIdx;
}
