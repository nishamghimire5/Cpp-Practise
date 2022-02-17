#include <iostream>
#include "account.h"
// #include <string>
using namespace std;

int main(){
    Account nisham_account;
    nisham_account.set_name("Nisham");
    nisham_account.set_balance(1000.0);

    if(nisham_account.deposit(200.0)){
        cout << "deposit OK"<<endl;
    }
    else{
        cout <<"deposit failed"<<endl;
    }

    if(nisham_account.withdraw(1500.0)){
        cout<<" withdraw okay"<<endl;
    }
    else{
        cout<<"not enough money"<<endl;
    }

    return 0;
}