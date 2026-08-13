#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
     count = 0;
     bool prime = true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    for( int i=0;i<n;i++){
        bool prime = true;
        if(arr[i]==0 || arr[i]==1){
        prime = false;
    }
    else {
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                prime = false;
                break;
            }
        }
    }
    if (prime == true){
        count = count + 1;
    }
    }
    cout<<count;

}