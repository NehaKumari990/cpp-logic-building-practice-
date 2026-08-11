# include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int sum = 0;
        int c;
    int a = 0;
    int b = 1;  
    for(int i=1;i<=n;i++){
        sum = sum + a;
         c = a+b;
         a = b;
         b=c;
        
    }
   cout<<sum;
}
    
