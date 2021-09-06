#include <iostream>
using namespace std;

// class Complex{
//     public:
//         int real, img;
//     Complex operator+(Complex c)  //Complex add(Complex c)
//     {
//         Complex temp;
//         temp.real =real+c.real;
//         temp.img=img+c.img;
//         return temp;
//     }
// };

// int main(){
//     Complex a, b, c;
//     a.real = 3; a.img = 6;
//     b.real = 10;b.img = 7;
//     c = a+b;  //c= a.add(b)
//     cout << c.real << "+i" << c.img << endl;
// }

class Complex
{
    private:
        int real, img;
    public:
        Complex(int r=0, int i=0){
            real = r;
            img = i;
        }
        Complex add(Complex c){
        Complex t;
        t.real = real + c.real;
        t.img = img + c.img;
        return t;
        }
        void display();
};

int main()
{
    Complex a(5,3), b(10,6), c;
    c = a.add(b);
    c.display();
    return 0;
}

void Complex::display()
    {
        cout << real << "+i" << img << endl;
    }    
