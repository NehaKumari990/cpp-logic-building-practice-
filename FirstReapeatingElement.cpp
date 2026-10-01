#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  vector<int> nums = {10, 5, 3, 4, 3, 5, 6};
  unordered_map<int,int>mp;
  for(int x:nums){
    if(mp.count(x)){
        cout<<x;
        break;
    }
    mp[x]++;

  }  
}