

#ifndef IntModulo_hpp
#define IntModulo_hpp
#include <iostream>
#include <stdio.h>
class IntModulo
{
private:
    int a,b,modp = 21;
    
public:
    IntModulo();
    IntModulo(int f,int s);
    void Enter();
    void Print();
    void SetVaribles(int f,int s,int mod);
    int Get_a();
    int Get_b();
    int Get_modp();
    int Plus();
    int Minus();
    int Umn();
    int Del();
    ~ IntModulo(){ };
};

#endif /* IntModulo_hpp */
