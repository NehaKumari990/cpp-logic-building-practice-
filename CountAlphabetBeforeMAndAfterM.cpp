#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin,str);
    
    int before = 0;
    int after = 0;

    for(int i=0;i<str.length();i++){
        if((str[i]>='a' && str[i]<'m')||(str[i]>='A' && str[i]<'M')){
            before++;
        }
        else if((str[i]>'m' && str[i]<='z')|| (str[i]>'M' && str[i]<='Z')){
            after++;
        }
    }
    cout<<"before m "<<" = "<<before<<" "<<"After m "<<" = "<<after;
}