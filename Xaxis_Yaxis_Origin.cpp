# include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"Origin";
    }
    else if(x==0){
        cout<<"Y axis";
    }
    else if(y==0){
        cout<<"X axis";
    }
    else{
        cout<<"lies in the quadrant";
    }
    
}