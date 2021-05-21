#include "IntModulo.hpp"
#include <iostream>


int main() {
    
    IntModulo a ;
    IntModulo b (20,21);
    a.Enter();
    IntModulo c;
    c = a.Plus(b);
    std::cout<<"Addition\n";
    c.Print();
    c = a.Minus(b);
    std::cout<<"Subtraction\n";
    c.Print();
    c = a.Umn(b);
    std::cout<<"Multiplication\n";
    c.Print();
    c = a.Del(b);
    std::cout<<"Division\n";
    c.Print();
    // getchar();
    return 0;
}
