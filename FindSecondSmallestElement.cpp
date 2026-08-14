#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    int secSmallest = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            secSmallest  = min;
            min = arr[i];
        }
        else if(arr[i]<secSmallest  && arr[i]!= min){
            secSmallest  = arr[i];
        }
    }
    cout<<min<<" "<<secSmallest ;
}
