

#ifndef IntModulo_hpp
#define IntModulo_hpp
#include <iostream>

class IntModulo
{
private:
    int num1, modp, x, y, nod;
    
public:
    IntModulo(const IntModulo& a);
    IntModulo();
    IntModulo(int f,int mod);
    IntModulo& operator=(const IntModulo& a);
    void Enter();
    void Print() const;
    void SetVaribles(int f,int mod);
    int Get_nod() const;
    int Get_a() const;
    int Get_b() const;
    int Get_modp() const;
    int Get_x() const;
    int Get_y() const;
    IntModulo extended_euclid(IntModulo& a);
    void Inverted_elem (IntModulo& a);
    ~ IntModulo(){ };
};

#endif /* IntModulo_hpp */
