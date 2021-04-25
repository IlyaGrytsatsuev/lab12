

#ifndef IntModulo_hpp
#define IntModulo_hpp
#include <iostream>
class IntModulo
{
private:
    int num1,modp = 21;
    
public:
    IntModulo();
    IntModulo(int f,int mod = 21);
    void Enter();
    void Print();
    void SetVaribles(int f,int mod);
    int Get_a();
    int Get_b();
    int Get_modp();
    IntModulo Plus( IntModulo& a);
    IntModulo Minus( IntModulo& a);
    IntModulo Umn( IntModulo& a);
    IntModulo Del( IntModulo& a);
    ~ IntModulo(){ };
};

#endif /* IntModulo_hpp */
