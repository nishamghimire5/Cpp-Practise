#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return (length+breadth) * 2;
    }
};

int main()
{
    rectangle *p = new rectangle;
    p->length = 5;
    p->breadth = 10;
    cout << "Area of reactangle is : " << p->area() << endl;
    cout << "Perimeter of reactangle is : " << p->perimeter() << endl;
}
