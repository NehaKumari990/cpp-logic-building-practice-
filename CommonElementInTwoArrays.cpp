#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    unordered_map<int,int>freq1;
    for(int x:arr1){
        freq1[x] = 1;
    }
    for(int x:arr2){
        if(freq1.find(x)!=freq1.end()){
            cout<<x<<endl;
        }
    }
}