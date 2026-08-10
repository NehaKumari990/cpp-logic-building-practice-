// # include <iostream>
// using namespace std;
// int main(){
//     // ap -> 1,2,5,7,9
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
      // for(int i=1;i<=2*n-1;i+=2){
      //     cout<<i<<endl;
      // }



    // using separate variable

//     int a = 1;
//     for(int i = 1;i<=n;i++){
//         cout<<a<<endl;
//         a = a+2;
//     }
// }





# include <iostream>
using namespace std;
int main(){
    // ap -> 100 97 94 ....7 4 1 -> 34 terms
    //int a = 100;
    // for(int i = 1;a>0;i++){
    //     cout<<a<<endl;
    //     a = a-3;
    // }

    for(int a=100;a>0;a = a-3){
        cout<<a<<endl;
    }
}   