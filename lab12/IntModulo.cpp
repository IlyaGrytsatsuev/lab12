
#include "IntModulo.hpp"
#include <iostream>

IntModulo::IntModulo(const IntModulo& a)
{
    num1 = a.num1;
    modp = a.modp;
    x = a.x;
    y = a.y;
    nod = a.nod;
}

IntModulo::IntModulo()
{
    num1 = 0;
    modp = 21;
    x = 0;
    y = 1;
    nod = 0;
}

IntModulo::IntModulo(int f, int mod)
{
    num1 = f;
    modp = mod;
    x = 1;
    y = 0;
    nod = 0;
   
}

IntModulo& IntModulo::operator=( const IntModulo& a)
{
    
    num1 = a.num1;
    modp = a.modp;
    x = a.x;
    y = a.y;
    nod = a.nod;
    return *this;
    
}
void IntModulo::Enter()
{
    std::cout<<"Enter the number:\n";
    std::cin>>num1;
    std::cout<<"Enter mod:\n";
    std::cin>>modp;
}
void IntModulo::Print() const
{
    std::cout<<"a = "<<Get_a()<<std::endl;
    std::cout<<"mod = "<<Get_modp()<<std::endl;
    std::cout<<"nod = "<<Get_nod()<<std::endl;
    std::cout<<"x = "<<Get_x()<<std::endl;
}

void IntModulo::SetVaribles(int f,int mod)
{
    num1=f;
    modp=mod;
}

int IntModulo::Get_x() const
{
    return x;
}
int IntModulo::Get_y() const
{
    return y;
}
int IntModulo::Get_nod() const
{
    return nod;
}

int IntModulo::Get_a() const
{
    return num1;
}


int IntModulo::Get_modp() const
{
    return modp;

}
 
IntModulo IntModulo:: extended_euclid(IntModulo& a)
{
    IntModulo rez;
    int q, r, x1, x2, y1, y2;

    if (a.modp == 0)
    {
        rez.nod = a.num1; rez.x = 1; rez.y = 0;
        return rez;
    }

    x2 = 0;
    x1 = 1;
    y2 = 1;
    y1 = 0;

    while (a.num1 > 0)
    {

        q = a.modp / a.num1;
        r = a.modp - q * a.num1;

        a.x = x2 - q * x1;
        a.y = y2 - q * y1;

        a.modp = a.num1;
        a.num1 = r;

        x2 = x1;
        x1 = a.x;
        y2 = y1;
        y1 = a.y;

    }

    rez.nod = a.modp;
    rez.x = x2;
    rez.y = y2;
    
    return rez;

}

void IntModulo:: Inverted_elem (IntModulo& a)
{
      if (a.nod == 1)
      {
         std::cout<<"Inverted element = "<<a.x<<std::endl;
      }
      else
      {
         std::cout<<"no inverse element"<<std::endl;
      }
    
}
