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
   if(a!=b && b!=c && c!=a){
    cout<<"all digits are distinct";
   }
   else {
    cout<<"all digits are not distinct";
   }
}
else{
   cout<<"invalid input";
}
}