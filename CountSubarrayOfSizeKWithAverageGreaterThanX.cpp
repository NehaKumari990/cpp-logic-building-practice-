#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int>nums = {2, 1, 5, 1, 3, 2};
int k = 3;
int x = 3;
int l = 0;
int h = k-1;
int sum = 0;
float avg = 0;
int count = 0;

for(int i=0;i<=h;i++){
    sum = sum + nums[i];
    

}
avg = (float)sum/k;

while(h<nums.size()){
    if(avg>=x){
        count++;
    }
    l++;
    h++;
    
    if(h==nums.size()){
        break;
    }
    sum = sum - nums[l-1];
    sum = sum + nums[h];
    avg = (float)sum/k;
    

}
cout<<count;

}