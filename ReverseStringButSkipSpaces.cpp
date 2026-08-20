#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0;
    int j = str.length() - 1;

    while(i < j){

        if(str[i] == ' '){
            i++;
        }
        else if(str[j] == ' '){
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

    cout << "Reversed string: " << str;

    return 0;
}