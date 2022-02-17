#include <iostream>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int x1, int y1){
            x = x1;
            y = y1;
        }
        Point(const Point &p1){ //copy constructor
            x = p1.x;
            y = p1.y;
        }
        int get_x(){return x;}
        int get_y(){return y;}
};

int main(){
    Point p4(30, 40); //normal constructor
    Point p5 = p4; //copy constructor

    //accessing the values after use of the constructors
    cout<<"P4.x = "<<p4.get_x()<<", P4.y = "<<p4.get_y()<<endl;
    cout<<"P5.x = "<<p5.get_x()<<", P5.y = "<<p5.get_y()<<endl;
    return 0;
}