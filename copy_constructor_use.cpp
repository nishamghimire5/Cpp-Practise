#include <iostream>
#include <cstring>
using namespace std;

class String{
    private:
        char *s;
        int size;
    public:
        String(const char *str = NULL); //constructor
        ~String() { delete [] s; }//destructor
        String(const String&);//copy constructor
        void print() { cout << s << endl; }//to print string, a function
        void change(const char *);//function to change string
};

String::String(const char *str) // constructor
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

void String::change(const char *str) //change funciton
{
    delete[] s;
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

String::String(const String& old_str)  //copy constructor
{
    size = old_str.size;
    s = new char[size + 1];
    strcpy(s, old_str.s);
}

int main(){
    String s1("Nisham 1"); //calling constuctor
    String s2 = s1; //copy constructor

    s1.print();
    s2.print();

    s2.change("New Nisham"); //change function

    s1.print();
    s2.print();
    return 0;
}