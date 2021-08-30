// #include <iostream>
// using namespace std;
// int main() {
//     int A[10] = {1, 2, 3, 42, 45, 67, 77, 98, 99, 101};
//     int key,counter = 0;
//     cout << "Enter searching key : ";
//     cin >> key;
//     for (int x : A)
//     {
//         if (x == key){
//             cout << "Found at "<< counter << endl;
//                 return 0;
//         }
//         counter++;
//     }
//     cout << "Not found ,sorry." << endl;
//     return 0;
//     }

//NEXT METHOD


#include <iostream>
using namespace std;
int main() {
    int A[10] = {1, 2, 3, 42, 45, 67, 77, 98, 99, 101};
    int key,i = 0;
    cout << "Enter searching key : ";
    cin >> key;
    for (i; i < 10;i++)
    {
        if (A[i] == key){
            cout << "Found at "<< i << endl;
                exit(0);
        }
    }
    cout << "Not found ,sorry." << endl;
    return 0;
    }