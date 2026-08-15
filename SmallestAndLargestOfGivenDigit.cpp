#include<iostream>
#include<climits>
using namespace std;
int main(){
    int min,max,n,num;
    min = INT_MAX;
    max = INT_MIN;
    cin>>n;
    while(n>0){
        num = n%10;
        if(min>num){
            min = num;
        }
        if(max<num){
            max = num;
        }
        n = n/10;

    }
    cout<<max<<" "<<min;
}