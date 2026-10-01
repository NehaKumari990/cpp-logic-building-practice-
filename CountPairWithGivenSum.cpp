#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[] = {1, 5, 7, -1, 5};
    int target = 6;
    unordered_map<int,int>mp;
    int count = 0;
    for (int x:arr){
        int needed = target - x;
        if(mp.find(needed)!=mp.end()){
            cout << needed << " + " << x << " = " << target<<endl;
            count += mp[needed];

        }
        mp[x]++;
    }
    cout<<count;
}