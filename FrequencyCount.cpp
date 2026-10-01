#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,1,2,4};
    unordered_map<int,int>freq;
    for(int x: arr){
        freq[x]++;
    }
    for(auto x:freq){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
}