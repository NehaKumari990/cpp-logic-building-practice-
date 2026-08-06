# include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"First quadrant";
    }
    else if(x>0 && y<0){
        cout<<"Fourth quadrant";
    } 
    else if(x<0 && y<0){
        cout<<"Third quadrant";
    }
    else if(x<0 && y>0){
        cout<<"second quadrant";
    }
    // else{
    //     cout<<"not in quadrant ";
    // }
    else if(x==0 && y==0){
        cout<<"point lies on origin";
    }
    else if(y==0){
        cout<<"point lies on X axis";
    }
    else {
        cout<<"point lies on Y axis";
    }
}