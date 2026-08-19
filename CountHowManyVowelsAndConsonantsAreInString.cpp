#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin>>str;
    int vowel = 0;
    int consonant = 0;
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
        if(str[i]=='a'|| str[i]=='A'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowel++;
        }
        else {
            consonant++;
        }
    }

    }
    cout<<"Vowel = "<<vowel<<" "<<"consonant = "<<consonant;
}