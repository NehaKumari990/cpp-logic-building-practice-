#include<iostream>
using namespace std;

int main(){
    int hour, minute;

    cout << "Enter hour and minute: ";
    cin >> hour >> minute;

    double hourAngle = hour * 30 + minute * 0.5;
    double minuteAngle = minute * 6;

    double angle = hourAngle - minuteAngle;

    if(angle < 0){
        angle = -angle;
    }

    if(angle > 180){
        angle = 360 - angle;
    }

    cout << "Smaller angle = " << angle << " degree";

    return 0;
}