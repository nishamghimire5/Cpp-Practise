#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;
        int millimeter;
    public:
        Distance() : meter(0), millimeter(0){};
        Distance(int,int);
        void showDistance();
        Distance operator-(Distance &) const;
        ~Distance(){};
};

Distance::Distance(int m,int mm): meter(m), millimeter(mm){}

void Distance::showDistance(){
    cout << "meter : " << meter << ", millimeter : " << millimeter << endl;
}

Distance Distance::operator-(Distance &y) const{
    Distance temp;
    if(meter > y.meter){
        temp.meter = meter - y.meter;
        if(millimeter > y.millimeter){
            temp.millimeter = millimeter - y.millimeter;
            if(temp.millimeter>=1000){
                temp.millimeter -= 1000;
                temp.meter++;
            }
        }
            else if(millimeter < y.millimeter){
                temp.millimeter = (millimeter + 1000) - y.millimeter;
                temp.meter--;
                }
    }
    return temp;
}

int main(){
    Distance a(10,5), b(3,6),c,d;
    c = a - b;
    c.showDistance();
    return 0;
}