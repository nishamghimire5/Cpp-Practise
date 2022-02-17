#include <iostream>
#include <vector>
using namespace std;

class Move{
    private:
        int *data;
    public:
        Move(int d)
        {
            data = new int;
            *data = d;

            cout << "Constructor is called for " << d << endl;
        }

        //copy constructor
        Move(const Move& source)
            : Move{*source.data}
        {
            cout << "Copy constructor is called - deep copy for "<< *source.data << endl;
        }

        // Move Constructor
    Move(Move&& source)
        : data{ source.data }
    {

        cout << "Move Constructor for "<< *source.data << endl;
        source.data = nullptr;
    }

        ~Move(){ 
            if (data != nullptr)
                cout << "destructor called for " << *data << endl;
            else 
                cout << "destructor called for nullptr" << endl;
            delete data;
        }
};

int main(){
    vector<Move> vec; //creating a vector of move class

    //inserting object of move class
    vec.push_back(Move{40});
    vec.push_back(Move{90});
    return 0;
}