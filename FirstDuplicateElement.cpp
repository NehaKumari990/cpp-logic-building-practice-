#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
   int arr[] = {4, 7, 2, 7, 9, 4, 1};
   unordered_map<int,int>mp;
   for (int x:arr){
    if(mp.find(x)!=mp.end()){
        cout<<"first duplicate: "<<x;
        break;
    }
    mp[x] = 1;
   } 
}