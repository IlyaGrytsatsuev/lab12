
#include "IntModulo.hpp"
#include <iostream>

IntModulo::IntModulo(const IntModulo& a)
{
    num1 = a.num1;
    modp = a.modp;
}

IntModulo::IntModulo()
{
    num1 = 0;
    modp = 21;
}

IntModulo::IntModulo(int f, int mod)
{
    num1 = f;
    modp = mod;
   
}
IntModulo& IntModulo::operator=( const IntModulo& a)
{
    
    num1 = a.num1;
    modp = a.modp;
    return *this;
    
}
void IntModulo::Enter()
{
    std::cout<<"Enter the number:\n";
    std::cin>>num1;
    std::cout<<"Enter mod:\n";
    std::cin>>modp;
}
void IntModulo::Print()
{
    std::cout<<"a = "<<Get_a()<<std::endl;
}

void IntModulo::SetVaribles(int f,int mod)
{
    num1=f;
    modp=mod;
}

int IntModulo::Get_a() const
{
    return num1;
}


int IntModulo::Get_modp() const
{
    return modp;

}

IntModulo IntModulo::Plus( const IntModulo& a) const
{
    IntModulo rez;
    if(a.modp > modp){
        rez.num1 = ((num1+a.num1)%a.modp);
    }
    else
    {
        rez.num1 = ((num1+a.num1)%modp);
        
    }
    rez.num1 = ((num1+a.num1)%modp);
    if(rez.num1<0)
    {
        rez.num1+=modp;
    }
    return rez;
}

IntModulo IntModulo::Minus(const IntModulo& a) const
{
    IntModulo rez;
    if(a.modp > modp){
    rez.num1 = ((num1-a.num1)%a.modp);
    }
    else
    {
        rez.num1 = ((num1-a.num1)%modp);
    }
    if(rez.num1<0)
    {
        rez.num1+=modp;
    }
    return rez;
}

IntModulo IntModulo::Umn(const IntModulo& a) const
{
    IntModulo rez;
    if(a.modp > modp){
        rez.num1 = ((num1*a.num1)%a.modp);
    }
    else
    {
        rez.num1 = ((num1*a.num1)%modp);
        
    }
    
    if(rez.num1<0)
    {
        rez.num1+=modp;
    }
    return rez;
}

IntModulo IntModulo::Del( const IntModulo& a) const
{
    IntModulo rez;
    if(a.modp > modp){
        rez.num1 = ((num1/a.num1)%a.modp);
    }
    else
    {
        rez.num1 = ((num1/a.num1)%modp);
        
    }
    rez.num1 = ((num1/a.num1)%modp);
    if(rez.num1<0)
    {
        rez.num1+=modp;
    }
    return rez;
}
        
