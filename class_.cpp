#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l){
        if(l>0)
            length = l;
        else
            length = -l;
    }
    void setBreadth(int b){
        if(b>0)
            breadth = b;
        else
            breadth = -b;
    }

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
    p->setLength(5);
    p->setBreadth(10);
    cout << "Area of reactangle is : " << p->area() << endl;
    cout << "Perimeter of reactangle is : " << p->perimeter() << endl;
}
