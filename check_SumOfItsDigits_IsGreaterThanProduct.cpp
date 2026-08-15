# include<iostream>
using namespace std;
int main(){
     int num;
   cout<<"enter number (1-9999) : ";
   cin>>num;
   if(num>=1 && num<=9){
    int a = num;
    cout<<"sum of its digit is not greater than the product of its digits.";
   }
   else if(num>=10 && num<=99){
    int a = num % 10;
    int b = num/10;
    if(a+b>a*b){
            cout<<"sum of its digit is  greater than the product of its digits.";

    }
    else {
    cout<<"sum of its digit is not greater than the product of its digits.";

    }
   }
   else if(num>=100 && num<=999){
   
    int a = num % 10;
   int n= num/10;
   int b = n % 10; 
   int nn = n/10;
   int c = nn % 10;
   if(a+b+c>a*b*c){
    cout<<"sum of its digit is  greater than the product of its digits.";

   }
   else{
    cout<<"sum of its digit is not greater than the product of its digits.";

   }
   }
   else if(num>=1000 && num<=9999){
    int a = num % 10;
   int n= num/10;
   int b = n % 10; 
   int nn = n/10;
   int c = nn % 10;
   int nnn = nn/10;
   int d = nnn%10;
   if(a+b+c+d>a*b*c*d){
        cout<<"sum of its digit is  greater than the product of its digits.";

   }
   else {
    cout<<"sum of its digit is not greater than the product of its digits.";

   }
   }
   else {
    cout<<"invalid input";
   }

   
}
