#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;

    int arr[n];
    int brr[n];

    bool same = true;

    cout<<"Enter first array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"First Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Enter second array: ";
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }

    cout<<"Second Array: ";
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        bool found = false;

        for(int j=0;j<n;j++){
            if(arr[i] == brr[j]){
                found = true;
                break;
            }
        }

        if(found == false){
            same = false;
            break;
        }
    }

    if(same){
        cout<<"Both arrays contain the same elements";
    }
    else{
        cout<<"Both arrays do not contain the same elements";
    }
}