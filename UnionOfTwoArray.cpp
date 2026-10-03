#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 4, 4};
vector<int> b = {3, 4, 5, 6, 6};
unordered_set<int>st;
for(int x:a){
    st.insert(x);
}
for(int x:b){
    st.insert(x);
}
for(auto x:st){
    cout<<x<<" ";
}
}