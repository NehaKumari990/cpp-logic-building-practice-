// # include <iostream>
// using namespace std;
// int main(){
//     char ch = 'q';
//     cout<<ch;
//      ch = '\0';
//     cout<<ch;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     char ch = 'q';
//     cout<<(int)ch; // typecasting
     
// }


// # include <iostream>
// using namespace std;
// int main(){
//     // int ,float,bool,char -> typecasting
//     float x = 7.1;
//     int y;
//     y = (int)x;
//     cout<<y; 
     
// }




// # include <iostream>
// using namespace std;
// int main(){
//     bool x = true;
//     cout<<x+9; // typecasting
     
// }



// # include <iostream>
// using namespace std;
// int main(){
//     char ch = 'A';
//     cout<<(int)ch+100; // typecasting
     
// }




// # half of integer

// # include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x; // x = 7
//     float y = (float)x;

//     cout<<y/2; // typecasting
     
// }



// # fractional part


# include <iostream>
using namespace std;
int main(){
float x;
cin >> x;
int y = (int)x;
if(y<0) y = y-1;
float z = (float)y;
x = x-z;
 cout<<x; 
     
}

