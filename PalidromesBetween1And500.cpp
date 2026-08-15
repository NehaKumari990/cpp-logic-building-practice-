# include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int n = i;
        int rev = 0;
        while(n>0){
        int num = n%10;
       rev =rev*10+ num;
       n = n/10;
    }
    if(i==rev){
        cout<<i<<" ";
    }
    }
}