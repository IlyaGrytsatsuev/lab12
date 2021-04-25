#include "IntModulo.hpp"
#include <iostream>


int main() {
    
    IntModulo a ;
    a.Enter();
    IntModulo b (20);
    IntModulo c;
    c = a.Plus(b);
    c.Print();
    c = a.Minus(b);
    c.Print();
    c = a.Umn(b);
    c.Print();
    c = a.Del(b);
    c.Print();
    // getchar();
    return 0;
}
