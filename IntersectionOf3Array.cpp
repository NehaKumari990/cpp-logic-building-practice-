#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 6};
    vector<int> c = {2, 3, 7, 4};
    unordered_set<int> st1;
    unordered_set<int> common1;
    unordered_set<int> common2;


    for(int x:a){
        st1.insert(x);
    }
    for(int x:b){
        if (st1.find(x) != st1.end()){
        common1.insert(x);
       } 
    }
    for(int x:c){
        if (common1.find(x) != common1.end()){
        common2.insert(x);
       } 
    }
    for (int x : common2) {
        cout << x << " ";
    }

}