// # include <iostream>
// using namespace std;
// int main(){
// cout<<"enter the cost price : ";
// int cp;
// cin>>cp;
// cout<<"enter the selling price : ";
// int sp;
// cin>>sp;
// if(sp>cp){
//     cout<<"profit = "<<sp-cp;
// } 

// if(cp>sp) {
//     cout<<"loss = "<<cp-sp;
// }
// if(cp==sp){
//     cout<<"no profit , no loss!";
// }
// }






// # include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;
//     if(n>=100 && n<=999){
//         cout<<"three digit number";
//     }
//     else{
//         cout<<"not a three digit number";
//     }
// }






// # 5 and 3 

# include <iostream>
using namespace std;
int main(){
    cout<<"enter a number : ";
    int n;
    cin>>n;
    // if(n%5==0 && n%3==0){
    //     cout<<"the number is divisible  by 5 and 3";
    // }
         // or
    if(n%15==0 ){
        cout<<"the number is divisible  by 5 and 3";
    }
    else{
        cout<<"the number is  not divisible  by 5 and 3";
    }
}
