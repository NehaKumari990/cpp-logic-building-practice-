#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    bool visited[] = {false};

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Frequency of each element:"<<endl;

    for(int i=0; i<n; i++){

        if(visited[i] == true){
            continue;
        }

        int count = 0;

        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = true;
            }
        }

        cout<<arr[i]<<" -> "<<count<<endl;
    }
}