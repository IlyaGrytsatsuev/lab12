

#ifndef IntModulo_hpp
#define IntModulo_hpp
#include <iostream>

class IntModulo
{
private:
    int num1,modp ;
    
public:
    IntModulo(const IntModulo& a){
        num1 = a.num1;
        modp = a.modp;
    }
    
    IntModulo();
    IntModulo(int f,int mod);
    IntModulo& operator=(const IntModulo& a);
    void Enter();
    void Print();
    void SetVaribles(int f,int mod);
    int Get_a();
    int Get_b();
    int Get_modp();
    IntModulo Plus(IntModulo& a);
    IntModulo Minus(IntModulo& a);
    IntModulo Umn(IntModulo& a);
    IntModulo Del(IntModulo& a);
    ~ IntModulo(){ };
};

#endif /* IntModulo_hpp */
