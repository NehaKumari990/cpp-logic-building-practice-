#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
   string s = "programming";
   unordered_map<char, int> freq;
   for(char ch:s){
    freq[ch]++;
   } 
   for(auto ch:freq){
    cout<<ch.first<<" -> "<<ch.second<<endl;
   }
}