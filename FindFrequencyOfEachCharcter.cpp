#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "Enter a string: ";
    cin>>str;
    bool visited[100] = {false};
    for(int i=0;i<str.length();i++){
        if(visited[i]==true){
            continue;
        }
        int count = 0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }

        }
        cout<<str[i]<<"->"<<count<<endl;

        // same character ko visited mark karo
        for(int j=i;j<str.length();j++){
            if(str[i]==str[j]){
                visited[j] = true;
            }
        }
    }
}