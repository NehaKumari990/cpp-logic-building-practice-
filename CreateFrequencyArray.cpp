#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no of elements: ";
    cin >> n;

    int arr[n];
    int freq[100] = {0};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                freq[i]++;
            }
        }
    }

    cout << "Frequency: ";
    for(int i = 0; i < n; i++){
        cout << freq[i] << " ";
    }

    return 0;
}