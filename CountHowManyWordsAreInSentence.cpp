#include<iostream>
using namespace std;

int main(){
   string str;
   cout<<"enter a sentence: ";
   getline(cin,str);
   int count = 1;
   for(int i = 0;i<str.length();i++){
    if(str[i]==' '){
        count++;
    }
   }
   cout<<"Number of words: "<<count;
}