#include<iostream>
using namespace std;

int main(){
    // yeh code sirf ek word ke liye hai


    // string str;
    // cin>>str;
    // for(int i=0;i<str.length();i++){
    //     cout<<(int) str[i]<<" ";

    // }



    // yeh code pura sentence ke liye hai

    
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++){
        cout << str[i] << " -> " << (int)str[i] << endl;
    }

    return 0;
}
