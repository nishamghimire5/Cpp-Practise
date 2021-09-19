#include <iostream>
#include <Windows.h>
using namespace std;

void counter(int);

int main(){
    cout << "Enter minutes : ";
    int count = 0;
    cin >> count;
    counter(count);
}

void counter(int counting){
    int seconds,counter,second;
    seconds = 0;
    counter = 60 * counting;
    do{
        counter--;
        system("cls");
        if(seconds==0){
            counting--;
            seconds = 59;
        }
        cout << "\t\t\t\t\t"<< "Time left : " << endl;
        cout <<"\t\t\t\t\t"<<counting << ":" << seconds << endl;
        Sleep(1000);
        seconds--;

        if(seconds==0 && counting==0){
            system("cls");
            cout << "\t\t\t\t\t"<< "Time left : " << endl;
            cout <<"\t\t\t\t\t"<<counting << ":" << seconds << endl;
            cout <<"\t\t\t\t\t"<< "Timer Ended " << endl;
            counter = 0;
        }
    } while (counter != 0);
}