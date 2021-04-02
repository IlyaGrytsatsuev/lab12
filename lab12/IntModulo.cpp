
#include "IntModulo.hpp"
#include <iostream>
#include <stdio.h>
#include <iostream>

IntModulo::IntModulo()
{
    IntModulo::Enter();
    modp = 21;
    IntModulo::Print();
}

IntModulo::IntModulo(int f, int s)
{
    IntModulo::SetVaribles(f,s,modp);
    IntModulo::Print();
}

void IntModulo::Enter()
{
    std::cout<<"Enter a:\n";
    std::cin>>a;
    std::cout<<"Enter b:\n";
    std::cin>>b;
}
void IntModulo::Print()
{
    std::cout <<"sum = "<<Plus()<<std::endl;
    std::cout<<"raznost = "<<Minus()<<std::endl;
    std::cout<<"proizvedenie = "<<Umn()<<std::endl;
    std::cout<<"delenie = "<<Del()<<std::endl;
    std::cout<<"a = "<<Get_a()<<std::endl;
    std::cout<<"b = "<<Get_b()<<std::endl;
    std::cout<<"mod p = "<<Get_modp()<<std::endl;
}

void IntModulo::SetVaribles(int f,int s,int mod)
{
    a=f;
    b=s;
    modp=mod;
}

int IntModulo::Get_a()
{
    return a;
}

int IntModulo::Get_b()
{
    return b;

}

int IntModulo::Get_modp()
{
    return modp;

}

int IntModulo::Plus()
{
    int result = 0;
    result = (((a%modp)+(b%modp))%modp);
    return result;
}

int IntModulo::Minus()
{
    int result(0);
    result = (((a%modp)-(b%modp))%modp);
    return result;
}

int IntModulo::Umn()
{
    int result(0);
    result = (((a%modp)*(b%modp))%modp);
    return result;
}

int IntModulo::Del()
{
    int result(0);
    result = (((a%modp)/(b%modp))%modp);
    return result;
}
        
