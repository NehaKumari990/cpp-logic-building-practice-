#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int start = 0;

    for(int i = 0; i <= str.length(); i++){

        // Space ya string ke end par word complete ho gaya
        if(str[i] == ' ' || str[i] == '\0'){

            int end = i - 1;

            // Word ko reverse karo
            while(start < end){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            // Next word ka start
            start = i + 1;
        }
    }

    cout << "Reversed words: " << str;

    return 0;
}