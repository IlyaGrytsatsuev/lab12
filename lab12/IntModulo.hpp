

#ifndef IntModulo_hpp
#define IntModulo_hpp
#include <iostream>

class IntModulo
{
private:
    int num1,modp ;
    
public:
    IntModulo(const IntModulo& a);
    IntModulo();
    IntModulo(int f,int mod);
    IntModulo& operator=(const IntModulo& a);
    void Enter();
    void Print();
    void SetVaribles(int f,int mod);
    int Get_a() const;
    int Get_b() const;
    int Get_modp() const;
    IntModulo Plus(const IntModulo& a) const;
    IntModulo Minus(const IntModulo& a) const;
    IntModulo Umn(const IntModulo& a) const;
    IntModulo Del(const IntModulo& a) const;
    ~ IntModulo(){ };
};

#endif /* IntModulo_hpp */
