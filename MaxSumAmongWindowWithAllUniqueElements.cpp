#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> nums = {2, 1, 3, 2, 4, 5};
    int k = 3;
    int l = 0;
    int h = k - 1;
    int sum = 0;
    int res = INT16_MIN;

    unordered_map<int,int> mp;

    // First window
    for(int i = 0; i <= h; i++){
        mp[nums[i]]++;
        sum = sum + nums[i];
    }

    while(h < nums.size()){

        if(mp.size() == k){
            res = max(res, sum);
        }

        l++;
        h++;

        if(h == nums.size()){
            break;
        }

        sum = sum - nums[l - 1];
        sum = sum + nums[h];

        mp[nums[l - 1]]--;

        if(mp[nums[l - 1]] == 0){
            mp.erase(nums[l - 1]);
        }

        mp[nums[h]]++;
    }

    cout << res;
}