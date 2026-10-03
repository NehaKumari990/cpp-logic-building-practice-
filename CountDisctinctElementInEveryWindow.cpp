#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
vector<int>nums = {1, 2, 1, 3, 4, 2, 3};
int k = 4;
int l = 0;
int h = k-1;
unordered_map<int,int>mp;
for(int i=0;i<=h;i++){
    mp[nums[i]]++;
}

while(h<nums.size()){
    cout<<mp.size()<<" ";
    l++;
    h++;
    if(h==nums.size()){
        break;
    }
    mp[nums[l-1]]--;
    if(mp[nums[l - 1]] == 0) {
            mp.erase(nums[l - 1]);
        }
        mp[nums[h]]++; 
}
}