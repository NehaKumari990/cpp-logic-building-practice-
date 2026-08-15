#include<iostream>
using namespace std;
int main(){
    int num;

    for(int i = 1; i <= 100; i++){
        int sum = 0;
        int n = i;

        while(n > 0){
            num = n % 10;
            sum = sum + num;
            n = n / 10;
        }

        if(sum % 2 == 0){
            cout << i << " ";
        }
    }
}