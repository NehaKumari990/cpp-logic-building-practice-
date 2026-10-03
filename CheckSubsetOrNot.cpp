#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
vector<int> a = {1, 2, 3};
vector<int> b = {1, 2, 3, 4, 5};
unordered_set<int>st;

bool subset = true;

for(int x:b){
    st.insert(x);
}

for (int x:a){
    if(st.find(x)==st.end()){
        subset = false;
        break;
    }
}

if(subset){
    cout<<"a is subset of b";
}
else{
    cout<<"a is not subset of b";
}

}