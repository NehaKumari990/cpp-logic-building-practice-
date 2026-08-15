#include<iostream>
using namespace std;

int main(){
  int num;
    int sum = 0;

    for(int i = 1; i <= 5; i++){
        cout << "Enter number: ";
        cin >> num;

        if(num == 0){
            continue;
        }

        sum = sum + num;
    }

    cout << "Sum of non-zero numbers = " << sum;

    return 0;
}  

