#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin,str);
    int letter = 0;
    int special_char = 0;
    int digit = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            letter++;
        }
        else {
            special_char++;
        }

    }
    cout<<"Digit = "<<digit<<" "<<"letter = "<<letter<<" "<<"special character = "<<special_char;
}