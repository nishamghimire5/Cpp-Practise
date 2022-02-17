#include <iostream>
#include <conio.h>
using namespace std;

class tollbooth {
    private:
    unsigned int totalCars;
    double totalMoney;

    public:
        tollbooth(): totalCars(0), totalMoney(0.0) {};
        ~tollbooth(){};

        void payingCar();
        void nopayCar();
        void display() const;
};

void tollbooth::payingCar(){
    totalCars += 1;
    totalMoney += 50;
}

void tollbooth::nopayCar(){
    totalCars += 1;
}

void tollbooth::display() const {
    cout << "Total cars passed by : " << totalCars<<endl;
    cout<<"Total cash collected : Rs "<<totalMoney<<endl;
}

int main(){

    char c = 'y';
    char choice;
    tollbooth Araniko_Highway;

    do{
        cout << "a. Paying car" << endl;
        cout << "b. No paying car" << endl;
        cout << "c. Display" << endl;

        choice = _getch();
        cout << choice << endl;
        int xyz = choice;
        if(xyz == 27)
            choice = 'c';

        switch(choice){
            case 'a':
                Araniko_Highway.payingCar();
                break;
            case 'b':
                Araniko_Highway.nopayCar();
                break;
            case 'c':
                Araniko_Highway.display();
                c = 'n';
                break;
        }
        if(c=='y'||c=='Y'){
            cout << "Do you want to continue (y/n): " << endl;
            cin >> c;
            }
    } while (c == 'y' || c == 'Y');
    return 0;
}