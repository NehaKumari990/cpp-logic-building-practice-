#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    double avg = (double)sum/n;
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            count = count + 1;
        }
    }
    cout<<count;
}
