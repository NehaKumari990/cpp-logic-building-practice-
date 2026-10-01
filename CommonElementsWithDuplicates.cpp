#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 3, 5};
    unordered_map<int,int>freq1;
    for(int x:arr1){
        freq1[x]++;
    }
    for(int x:arr2){
        if(freq1.find(x)!=freq1.end()){
            if(freq1[x]>0){
              cout<<x<<endl; 
              freq1[x]--; 
            } 
        }
    }
}