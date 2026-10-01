#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {4, 5, 6, 7, 8};
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    for(int x:nums1){
        mp1[x] = 1;
    }
    for(int x:nums2){
        mp2[x] = 1;
    }
    cout<<"only nums1 :";
    for(int x:nums1){
        if(mp2.find(x)==mp2.end()){
            cout<<x<<" ";
        }
    }
    cout<<endl;
    cout<<"only nums2 :";
    for(int x:nums2){
        if(mp1.find(x)==mp1.end()){
            cout<<x<<" ";
        }
    }
}