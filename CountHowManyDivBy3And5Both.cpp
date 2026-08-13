#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
     count = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0;i<n;i++){
        if((arr[i]%3==0) && (arr[i]%5==0)){
            count = count + 1;
        }
    }
    cout<<count;
}
