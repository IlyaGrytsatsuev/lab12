
#include "IntModulo.hpp"
#include <iostream>

IntModulo::IntModulo()
{
    num1 = 0;
    modp = 21;
    //IntModulo::Print();
}

IntModulo::IntModulo(int f, int mod)
{
    IntModulo::SetVaribles(f,modp);
    //IntModulo::Print();
}

void IntModulo::Enter()
{
    std::cout<<"Enter a:\n";
    std::cin>>num1;
}
void IntModulo::Print()
{
    std::cout<<"a = "<<Get_a()<<std::endl;
    std::cout<<"mod p = "<<Get_modp()<<std::endl;
}

void IntModulo::SetVaribles(int f,int mod)
{
    num1=f;
    modp=mod;
}

int IntModulo::Get_a()
{
    return num1;
}


int IntModulo::Get_modp()
{
    return modp;

}

IntModulo IntModulo::Plus(IntModulo& a)
{
    IntModulo rez;
    rez.num1 = ((num1+a.num1)%a.modp);
    return rez;
}

IntModulo IntModulo::Minus(IntModulo& a)
{
    IntModulo rez;
    rez.num1 = ((num1-a.num1)%a.modp);
    return rez;
}

IntModulo IntModulo::Umn(IntModulo& a)
{
    IntModulo rez;
    rez.num1 = ((num1*a.num1)%a.modp);
    return rez;
}

IntModulo IntModulo::Del(IntModulo& a)
{
    IntModulo rez;
    rez.num1 = ((num1/a.num1)%a.modp);
    return rez;
}
        
