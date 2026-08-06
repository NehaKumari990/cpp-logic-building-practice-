# include<iostream>
using namespace std;
int main(){
    int hour;
    cout<<"enter hour (0-23): ";
    cin>>hour;
    if(hour>=0 && hour <=23){
    if(hour>=0 && hour<=11){
        cout<<"Good Morning";
    }
    else if(hour>=12 && hour<=16){
        cout<<"Good Afternoon";
    }
    else if(hour>=17 && hour<=20){
        cout<<"Good evening";
    }
    else { // 21-23
        cout<<"Good Night";
    }
}
else {
    cout<<"invalid hour";
}
}