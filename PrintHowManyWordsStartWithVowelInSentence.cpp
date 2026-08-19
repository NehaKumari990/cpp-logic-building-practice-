#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int count = 0;

    for(int i = 0; i < str.length(); i++){

        // Check if current character is the first character of a word
        if(i == 0 || str[i-1] == ' '){

            if(str[i] == 'a' || str[i] == 'e' ||
               str[i] == 'i' || str[i] == 'o' ||
               str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' ||
               str[i] == 'I' || str[i] == 'O' ||
               str[i] == 'U'){

                count++;
            }
        }
    }

    cout << "Words starting with a vowel = " << count;

    return 0;
}