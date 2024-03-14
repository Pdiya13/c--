#include<iostream>
class Complex{
    float re;
    float im;
public:
    Complex(float x = 0, float y = 0);
    Complex(const Complex &c){
        std::cout << "Copy " << std::endl;
        re = c.re;
        im = c.im;
    }
    Complex add(Complex c);
    void print();
};
Complex::Complex(float x, float y){
    std::cout << "Constructor " << std::endl;
    re = x;
    im = y;
}
Complex Complex::add(Complex c){
    re += c.re;
    im += c.im;
    return *this;
}
void Complex::print(){
    std::cout << re << " + j";
    std::cout << im << std::endl;
}
Complex c1; // Default initialization

int main()
{
    std::cout << "main function 1\n";
    Complex c2 = c1; // copy initialization
    std::cout << "main function 2\n";
    c2 = c1; // assignment, because object already exists
    std::cout << "main function 3\n";
    // With flag -fno-elide-constructors
        // copy arg, copy return object to temp object
        // copy temp object to c3
    // Without flag -fno-elide-constructors
        // copy arg, copy return object to c3
    Complex c3 = c1.add(c2);
    c3.print();
    std::cout << "main function 4\n";
    c3 = c1.add(c2);
    std::cout << "main function 5\n";
    c3.print();
    return 0;
}
