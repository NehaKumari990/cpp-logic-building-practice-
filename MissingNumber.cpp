#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 5, 6};
    unordered_set<int>st;
    for(int x:nums){
        st.insert(x);
    }
    for(int i=1;i<=6;i++){
        if(st.find(i) == st.end()){
            cout<<i;
            break;
        }
    }
}