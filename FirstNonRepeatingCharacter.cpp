#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
   string s = "aabbcdde";
   unordered_map<char,int>freq;
   for(char x:s){
    freq[x]++;
   } 
   for(char x:s){
    if(freq[x]==1){
        cout<<x;
        break;
    }
   }
}