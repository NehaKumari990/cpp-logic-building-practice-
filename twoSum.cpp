#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int,int>mp;
    for (int x:arr){
        int needed = target - x;
        if(mp.find(needed)!=mp.end()){
            //cout<<x<<" "<<needed;
            cout << needed << " + " << x << " = " << target;
        }
        mp[x] = 1;
    }
}