#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 2, 3, 4, 3, 5, 1};
    unordered_set<int> st;
    for (int x : nums) {
    st.insert(x);
   }
   for(auto x:st){
    cout<<x<<" ";
   }


}