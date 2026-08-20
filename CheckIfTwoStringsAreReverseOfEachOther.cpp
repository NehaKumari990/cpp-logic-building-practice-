#include<iostream>
using namespace std;

int main(){
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    bool reverse = true;

    if(str1.length() != str2.length()){
        reverse = false;
    }
    else{
        int i = 0;
        int j = str2.length() - 1;

        while(i < str1.length()){
            if(str1[i] != str2[j]){
                reverse = false;
                break;
            }

            i++;
            j--;
        }
    }

    if(reverse){
        cout << "Strings are reverse of each other";
    }
    else{
        cout << "Strings are not reverse of each other";
    }

    return 0;
}