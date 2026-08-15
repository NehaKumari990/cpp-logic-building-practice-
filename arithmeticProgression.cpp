# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d1 = c-b;
    int d2 = b-a;
    if(d1 == d2){
        cout<<"they are in AP";
    }
    else {
        cout<<"they are not in AP";
    }

}