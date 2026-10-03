#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15, 3};
    int target = 10;

    unordered_set<int> st;
    bool found = false;

    for (int x : nums) {
        int needed = target - x;

        if (st.find(needed) != st.end()) {
            found = true;
            break;
        }

        st.insert(x);
    }

    if (found) {
        cout << "Pair exists";
    }
    else {
        cout << "Pair does not exist";
    }

    return 0;
}