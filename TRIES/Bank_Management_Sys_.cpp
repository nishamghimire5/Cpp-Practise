/* Bank Management System */
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;

class bank
{
    char name[40],address[40],type[10];
    int balance,id;
    string acc_num;
    static int totalCustomers;

public:
    //functions available
        void openAccount(); //open a new account
        void depositMoney(); //put money or add money
        void withdrawMoney(); //take money out or subtract
        void displayAccount(); //show account details
        void report() const; //to show data in tabular form
};

string create_accn(int id){
    string concat;
    static int random = 2021;
    concat = to_string(random) + to_string(id) + to_string(rand());
    return concat;
}

//defining functions

//first function
void bank :: openAccount(){
    id = totalCustomers;
    acc_num = create_accn(totalCustomers);
    cout << "Enter Your Full Name : ";
    cin.ignore();
    cin.getline(name,40);
    cout << "Enter adress : ";
    cin.getline(address,40);
    cout << "Which type of account to create \t 1.Saving \t 2.Current : ";
    cin.getline(type, 10);
    cout << "Amount to deposit : ";
    cin >> balance;
    cout << "Congratulations! Account has been created successfully.\n";
}

//second function
    void bank ::depositMoney(){
        int a;
        cout << "Amount to deposit : ";
        cin >> a;
        balance += a;
        cout << "Total amount deposited = " << balance<<endl;
    }

//third function
    void bank ::displayAccount(){
        cout << "ID : " << id << endl;
        cout << "Account Number : " << acc_num<<endl;
        cout << "Your Name : "<<name<<endl;
        cout << "Your Address : " << address << endl;
        cout << "Type of account : " << type<<endl;
    }
    
//forth function
    void bank :: withdrawMoney(){
        float amount;
        cout<<"Enter amount to withdraw : ";
        cin >> amount;
        balance = balance - amount;
        cout << "Total balance left : " << balance<<endl;
    }


int main(){
    //program execute form here |-->
    char choice2;
    int choice;
    bank object;
    do{
    cout << "1.  Create an account \n";
    cout << "2.  Deposit Money \n";
    cout << "3.  Withdraw Money \n";
    cout << "4.  Display Account \n";
    cout << "5.  Exit \n";
    cout << "Enter your choice : ";
    cin >> choice;
    system("cls");

    switch(choice){
        case 1: 
            cout<< "1. Create account \n";
            object.openAccount();
        break;

        case 2:
            cout << "2. Deposit Money \n";
        object.depositMoney();
        break;
        
        case 3:
            cout<<"3. Withdraw Money \n";
            object.withdrawMoney();
            break;
            
        case 4:
            cout<<"4. Display Account \n";
            object.displayAccount();
            break;
        case 5:
            exit(1);
        default:
            cout << "Invalid input \n";
            continue;
    }

    cout << "Do you want to go back to menu? (Y/N) : \n";
    choice2 =getch();

    if (choice2=='N' || choice2=='n') exit(0);

    } while (choice2 ='Y' || choice2=='y');
    
    return 0;
}