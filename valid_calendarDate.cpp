# include<iostream>
using namespace std;
int main(){
    int month,day;
    cin>>month>>day;
    if(day>31 || day<=0){
            cout<<"invalid day";
        }
    else {
    switch(month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
       if(day>=1 && day<=31){
        cout <<"valid date";
       }
       else {
        cout<<"invalid date";
       }
       break;

    case 4:
    case 6:
    case 9:
    case 11:
        if(day>=1 && day<=30){
        cout << "valid date";
        
       }
       else {
        cout<<"invalid date";
       }
       break;


    case 2:
        if(day>=1 && day<=28){
        cout << "valid date";
       }
       else {
        cout<<"invalid date";
       }
       break;

      

    default:
        
        cout << "Invalid month";
}
      
    }

}