// # include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter a number : ";
//     int n;
//     cin>>n;


//     // if((n%5==0 || n%3==0) && n%15!=0 ){
//     //     cout<<"the number is divisible  by 5 or 3 but not 15";
//     // }
//            // or

//     if(n%5==0 || n%3==0){   
//     if(n%15!=0 ){
//         cout<<"the number is divisible  by 5 or 3 but not 15";
//     }
//     else{
//         cout<<"not matching condition";
//     }
// }
// else{
//     cout<<" not matching condition";
// }
// }







// # 5 and 3 nested 



# include <iostream>
using namespace std;
int main(){
    cout<<"enter a number : ";
    int n;
    cin>>n;
    if(n%5==0){   
       if(n%3==0 ){
        cout<<"the number is divisible  by 5 and 3 both ";
    }
       else{ // n%5==0 but n%3!=0
          cout<<"not matching condition";
    }
}
    else{
        cout<<"not matching condition";
    }
}