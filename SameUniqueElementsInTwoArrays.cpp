#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> a = {1, 2, 3, 3, 4};
vector<int> b = {4, 3, 2, 1, 1};
unordered_set<int>st1;
unordered_set<int>st2;
bool uniqueEle = true;
for(int x:a){
    st1.insert(x);
}
for(int x:b){
    st2.insert(x);
}
if(st1.size() != st2.size()){
    uniqueEle = false;
}
else{
    for(auto x:st1){
    if(st2.find(x)==st2.end()){
        uniqueEle = false;
        break;
    }
}
}
if(uniqueEle == true){
    cout<<"Same unique elements";
}
else{
    cout<<"Different unique elements";
}
}