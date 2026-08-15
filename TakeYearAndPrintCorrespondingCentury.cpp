#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter year: ";
    cin >> year;

    int century = (year - 1) / 100 + 1;

    cout << century << "th century";

    return 0;
}