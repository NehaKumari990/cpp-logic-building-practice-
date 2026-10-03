#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 2, 3, 4, 4};
    vector<int> nums2 = {2, 2, 3, 4, 4, 5};
    unordered_set<int> st1;
    unordered_set<int> common;

    for(int x:nums1){
        st1.insert(x);
    }
    for(int x:nums2){
        if (st1.find(x) != st1.end()){
        common.insert(x);
       } 
    }
    for (int x : common) {
        cout << x << " ";
    }

}