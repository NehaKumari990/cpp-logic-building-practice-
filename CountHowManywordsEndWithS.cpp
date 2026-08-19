#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int count = 0;

    for(int i = 0; i < str.length(); i++){

        // Word ends before a space
        if(str[i] == ' ' && str[i-1] == 's'){
            count++;
        }
    }

    // Check last word
    if(str[str.length()-1] == 's'){
        count++;
    }

    cout << "Words ending with s = " << count;

    return 0;
}