#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    unordered_set<int>st;
    bool present = true;
for(int x:nums){
    st.insert(x);
}
for(int i=1;i<=nums.size();i++){
    if(st.find(i)==st.end()){
         present = false;
         break;
    }
}
if(present == true){
    cout<<"All numbers present";
}
else{
    cout<<"Missing number";
}
}