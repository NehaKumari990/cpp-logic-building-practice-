# include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
//     if(age>=0){
//     if(age>=18){
//         cout<<"eligible for vote";
//     }
//     else {
//         cout<<"not eligible";
//     }
// }
// else {
//     cout<<"enter valid age";
// }





// nested if else 

if(age<0){
    cout<<"enter valid age";
}
else if(age>=18){
    cout<<"eligible for vote";
}
else {
    cout<<"not eligible";
}

}