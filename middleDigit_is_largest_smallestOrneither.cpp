# include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"enter 3 digit number : ";
   cin>>num;
   if(num>=100 && num<=999){
    int a = num % 10;
   int n= num/10;
   int b = n % 10; 
   int nn = n/10;
   int c = nn % 10;
   if(b>c && b>a){
    cout<<"b is largest";
   }
   else if(b<a && b<c){
    cout<<"b is smallest";
   }
   else{
    cout<<"b is neither largest nor smallest";
   }
}
else{
   cout<<"invalid input";
}
}