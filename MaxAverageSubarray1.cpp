#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int>nums = {1, 12, -5, -6, 50, 3};
int k = 4;
int l = 0;
int h = k-1;
int sum = 0;
float avg ;
float res = INT16_MIN;
for(int i=0;i<=h;i++){
    sum = sum + nums[i];

}
avg = (float)sum/k;

while(h<nums.size()){
    res = max(res,avg);
    l++;
    h++;
    
    if(h==nums.size()){
        break;
    }
    sum = sum - nums[l-1];
    sum = sum + nums[h];
    avg = (float)sum/k;

}
cout<<res;

}