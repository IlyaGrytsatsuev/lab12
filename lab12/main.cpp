#include "IntModulo.hpp"
#include <iostream>


int main() {
    
    IntModulo a ;
    a.Enter();
    IntModulo b ;
    b = b.extended_euclid(a);
    b.Inverted_elem (b);
    return 0;
}
