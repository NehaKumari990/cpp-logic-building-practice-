# include<iostream>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    if(amount<0){
        cout<<"invalid amount";
    }

   else if(amount%100!=0){
        cout<<"cannot be evenly divided";
    }
    else {
        int note2000 = amount/2000;
        amount = amount % 2000;

        int note500 = amount/500;
        amount = amount % 500;

        int note100 = amount/100;
        cout << "Amount can be evenly divided." << endl;
        cout << "2000 Notes = " << note2000 << endl;
        cout << "500 Notes = " << note500 << endl;
        cout << "100 Notes = " << note100 << endl;


    }
}