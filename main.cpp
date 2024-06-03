#include <iostream>

class Base
{
private:
    int value;

public:
    Base() : value{0} { std::cout << "Base no-args constructor" << std::endl; };
    Base(int x) : value{x} { std::cout << "Base (int) overloaded constructor" << std::endl; };

    ~Base() { std::cout << "Base destructor" << std::endl; };
};

class Derived : public Base
{
private:
    int doubledValue;

public:
    Derived() : Base{}, doubledValue{0} { std::cout << "Derived no-args constructor" << std::endl; };
    Derived(int x) : Base{x}, doubledValue{x * 2} { std::cout << "Derived (int) overloaded constructor" << std::endl; };

    ~Derived() { std::cout << "Derived destructor" << std::endl; };
};

int main()
{
    // Constructors and Destructors with inheritance
    // Base b;
    // Base b1(100);

    // Derived d;
    Derived d1(1000);

    // std::cout << "Hello, World!" << std::endl;
    // // getch(); // needs conio.h
    // // std::cin.get();
    // // getc(stdin);
    // std::cout << "Hello, World!" << std::endl;
    return 0;
}