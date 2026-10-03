#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {3, 4, 5, 6, 7};
    unordered_set<int> st1;
    for(int x:nums1){
        st1.insert(x);
    }
    for(int x:nums2){
       if (st1.find(x) != st1.end()){
        cout<<x<<" ";
       } 
    }
}