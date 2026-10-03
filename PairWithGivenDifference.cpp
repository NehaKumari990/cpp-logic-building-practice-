#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
  vector<int> nums = {5, 3, 9, 7, 2};
    int k = 4;
    bool found = false;
    unordered_set<int>st;
    for(int x:nums){
      st.insert(x);
    }
    for(int x:nums){
     int res = k + x;
      if(st.find(res)!=st.end()){
        found = true;
        break;
      }
    }
    if(found)
    cout<<"pair exists";
    else {
     cout<<"Pair does not exists";
    }

}