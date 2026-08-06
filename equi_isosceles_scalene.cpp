# include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        //cout<<"valid triangle";
        if(a==b && b==c){
            cout<<"equilateral triangle";
        }
        else if (a!=b && b!=c && c!=a){
            cout<<"scalene Triangle";
        }
        else { // (a==b || b==c ||a==c)
            cout<<"isosceles Triangle";
        }
    }
    else {
        cout<<"invalid triangle";
    }
}