#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int pos = 0;
    int neg = 0;
    int zero = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos = pos + 1;
        }
        else if (arr[i]<0){
            neg = neg + 1;
        }
        else{
            zero = zero + 1;
        }
    }
    cout<<pos<<" "<<neg<<" "<<zero;
}
