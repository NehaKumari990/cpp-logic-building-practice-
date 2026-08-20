#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int i = 0;
    int j = str.length() - 1;

    while(i < j){

        if(str[i] >= '0' && str[i] <= '9'){
            i++;
        }
        else if(str[j] >= '0' && str[j] <= '9'){
            j--;
        }
        else{
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;

            i++;
            j--;
        }
    }

    cout << "Result: " << str;

    return 0;
}