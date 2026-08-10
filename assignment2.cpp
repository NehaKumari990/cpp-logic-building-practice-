// sum of all even digits of a given number

// # include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter a number : ";
// cin>>n;
// int sum = 0;
// while(n>0){
//     int x = n%10;
//     sum += (x%2==0?x:0);
//     n/=10;

// }
// cout<<sum;
// }


// sum of a given number and its reverse 


// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a = n,x=0;
//     while(a>0){
//         x *=10;
//         x += (a%10);
//         a /= 10;
//     }
//     cout<<n+x<<endl;
// }



// armstrong number


# include <iostream>
using namespace std;
int main(){
    
    
    for(int i =1;i<=500;i++){
        int a = i,x=0;
    while(a>0){

        x += (a%10)*(a%10)*(a%10);
        a /= 10;
    }
    if(x==i) cout<<i<<endl;
}
}