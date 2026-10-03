#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {

    vector<int> nums = {100, 4, 200, 1, 3, 2};
    unordered_set<int> st;
    // Step 1: Saare elements set mein daalo
    for (int x : nums) {
        st.insert(x);
    }
    int longest = 0;
    // Step 2: Har element ko check karo
    for (int x : nums) {
        // x-1 nahi hai -> x sequence ka starting point
        if (st.find(x - 1) == st.end()) {
            int current = x;
            int count = 0;
            // Step 3: Consecutive numbers check karo
            while (st.find(current) != st.end()) {
                count++;
                current++;
            }
            // Step 4: Maximum length store karo
            longest = max(longest, count);
        }
    }
    cout << longest;

    return 0;
}