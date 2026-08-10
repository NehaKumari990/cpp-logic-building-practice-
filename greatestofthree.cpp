// # include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter 1st number : ";
//     cin>>a;
//     cout<<"enter 2nd number : ";
//     cin>>b;
//      cout<<"enter 3rd number : ";
//     cin>>c;
//     if(a>b && a>c){
//         cout<<a<<" is largest";
//     }
//     if(b>c && b>a){
//         cout<<b<<" is largest";
//     }
//     if(c>a && c>b){
//         cout<<c<<" is largest";
//     }
     
     
//}






// # alphabet or not 



# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122 || ascii >=65 && ascii<=90){
        cout<<"the character is alphabet";
    }
    else {
        cout<<"the character is not an alphabet";
    }
}