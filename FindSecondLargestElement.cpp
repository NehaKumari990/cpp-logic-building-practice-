#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int max = INT_MIN;
    int secLargest = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            secLargest = max;
            max = arr[i];
        }
        else if(arr[i]>secLargest && arr[i]!= max){
            secLargest = arr[i];
        }
    }
    cout<<max<<" "<<secLargest;
}
