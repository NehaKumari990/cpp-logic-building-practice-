#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
   int  n = nums.size();
   int majority = n / 2;
   unordered_map<int,int>freq;
   for(int x:nums){
    freq[x]++;
   }
   for(int x:nums){
    if(freq[x]>majority){
        cout<<x;
        break;
    }
   }


}