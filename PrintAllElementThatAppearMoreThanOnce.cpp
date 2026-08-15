#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter no of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements appearing more than once: ";

    for(int i = 0; i < n; i++) {

        int count = 0;

        // Count frequency of arr[i]
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if it is duplicate
        if(count > 1) {

            // Check whether we already printed it
            bool alreadyPrinted = false;

            for(int k = 0; k < i; k++) {
                if(arr[k] == arr[i]) {
                    alreadyPrinted = true;
                    break;
                }
            }

            if(!alreadyPrinted) {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}