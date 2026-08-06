# include<iostream>
using namespace std;
int main(){
    int num;
   cout<<"enter 4 digit number : ";
   cin>>num;
   if(num>=999 && num<=9999){
    int a = num % 10;
   int n= num/10;
   int b = n % 10; 
   int nn = n/10;
   int c = nn % 10;
   int nnn = nn/10;
   int d = nnn%10;
   //cout<<a<<b<<c<<d;
   if(a == d){
    cout<<"first and last digits are equal ";
   }
   else {
    cout<<"first and last digits are not equal";
   }
}
else {
    cout<<"invalid input";
}

}