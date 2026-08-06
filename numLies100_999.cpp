# include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num>=100 && num<=999){
        cout<<"number lies within the range [100,999]";
    }
    else {
               cout<<"number does not lie within the range [100,999]"; 
    }
}