# include<iostream>
using namespace std;
int main(){
    int n,num;
    cin>>n;
   int sum = 0;
   int original = n;
while(n>0){
    num = n%10;
    int fact = 1;
    for(int i=2;i<=num;i++){
        fact = fact * i;
    }
    sum = sum + fact;
    n = n/10;

}
if(original==sum){
    cout<<"Strong Number";
}
else {
    cout<<"Not Strong Number";
}

}