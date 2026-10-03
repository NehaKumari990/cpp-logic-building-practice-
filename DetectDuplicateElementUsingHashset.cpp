#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 3, 4, 5, 2, 6, 3};

    unordered_set<int> st;

    for (int x : nums) {

        auto result = st.insert(x);

        if (result.second == false) {
            cout << "Duplicate exists";
            return 0;
        }
    }

    cout << "No duplicate";

    return 0;
}