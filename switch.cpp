// # weekday

// # include <iostream>
// using namespace std;
// int main(){
//      int x;
//      cout<<"enter day number : ";
//      cin>>x;
//      switch (x)
//      {
//         case 1:
//           cout<<"Monday";
//         break;
//         case 2:
//           cout<<"tuesday";
//         break;
//         case 3:
//           cout<<"wednesday";
//         break;
//         case 4:
//           cout<<"thrusday";
//         break;
//         case 5:
//           cout<<"friday";
//         break;
//         case 6:
//           cout<<"saturday";
//         break;
//         case 7:
//           cout<<"sunday";
//         break;
     
//      default:
//         cout<<"invalid number";
//      }
// }






// # month day 



# include <iostream>
using namespace std;
int main(){
    // 1 3 5 7 8 10 12 -> 31 days
    // 4 6 9 11 -> 30 days
    // 2 -> 28 days 
     int x;
     cout<<"enter month number : ";
     cin>>x;
     switch ((x<=7 && x%2!=0) || (x>=8 && x%2==0)){
        case 1 :
        cout<<"31";
     }
     switch (x==4 || x==6 || x==9 || x==11){
        case 1 :
        cout<<"30";
     }
     switch (x){
        case 2 :
        cout<<"28";
     }
    }
     