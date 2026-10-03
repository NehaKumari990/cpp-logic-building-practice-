#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};

    unordered_set<int> stA;
    unordered_set<int> stB;
    for (int x : a) {
        stA.insert(x);
    }
    for (int x : b) {
        stB.insert(x);
    }
    for (int x : stA) {
        if (stB.find(x) == stB.end()) {
            cout << x << " ";
        }
    }
    for (int x : stB) {
        if (stA.find(x) == stA.end()) {
            cout << x << " ";
        }
    }

    return 0;
}