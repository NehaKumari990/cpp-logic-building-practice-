# include<iostream>
using namespace std;
int main(){
    int h,p,b;
    cin>>h>>p>>b;
    int sum1 = p*p + b*b;
    int sum2 = h*h;
    if(p<=0 || b<=0 || h<=0){// three positive itegers can satify pythogoras theorem. 
        cout<<"invalid input";
    }
    else if(sum2==sum1){
        cout<<"they can form a Pythagorean triplet.";
    }
    else {
        cout<<"they can not form a Pythagorean triplet.";
    }
}