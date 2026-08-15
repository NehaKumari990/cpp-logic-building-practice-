#include<iostream>
using namespace std;

int main(){
    int day1, month1;
    int day2, month2;

    cout << "Enter first date (day month): ";
    cin >> day1 >> month1;

    cout << "Enter second date (day month): ";
    cin >> day2 >> month2;

    if(month1 < month2){
        cout << day1 << "/" << month1 << " comes first";
    }
    else if(month1 > month2){
        cout << day2 << "/" << month2 << " comes first";
    }
    else{
        if(day1 < day2){
            cout << day1 << "/" << month1 << " comes first";
        }
        else if(day1 > day2){
            cout << day2 << "/" << month2 << " comes first";
        }
        else{
            cout << "Both dates are same";
        }
    }

    return 0;
}