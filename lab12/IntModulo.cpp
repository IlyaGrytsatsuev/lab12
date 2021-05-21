
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
    num1 = f;
    modp = mod;
    //IntModulo::SetVaribles(f,modp);
    //IntModulo::Print();
}
IntModulo& IntModulo::operator=( const IntModulo& a){
    
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

int IntModulo::Get_a()
{
    return num1;
}


int IntModulo::Get_modp()
{
    return modp;

}

IntModulo IntModulo::Plus( IntModulo& a)
{
    if(modp!=a.modp)
    {
    std::cout<<"Enter the mod  you want to use for addition\n";
    std::cin>>modp;
    }
    IntModulo rez;
    rez.num1 = ((num1+a.num1)%modp);
    if(rez.num1<0){
        rez.num1+=modp;
    }
    return rez;
}

IntModulo IntModulo::Minus( IntModulo& a)
{
    if(modp!=a.modp)
    {
    std::cout<<"Enter the mod  you want to use for subtraction\n";
    std::cin>>modp;
    }
    IntModulo rez;
    rez.num1 = ((num1-a.num1)%modp);
    if(rez.num1<0){
        rez.num1+=modp;
    }
    return rez;
}

IntModulo IntModulo::Umn( IntModulo& a)
{
   if(modp!=a.modp)
    {
    std::cout<<"Enter the mod  you want to use for multiplication\n";
    std::cin>>modp;
    }
    IntModulo rez;
    rez.num1 = ((num1*a.num1)%modp);
    if(rez.num1<0){
        rez.num1+=modp;
    }
    return rez;
}

IntModulo IntModulo::Del( IntModulo& a)
{
    if(modp!=a.modp)
    {
    std::cout<<"Enter the mod  you want to use for division\n";
    std::cin>>modp;
    }
    
    IntModulo rez;
    rez.num1 = ((num1/a.num1)%modp);
    if(rez.num1<0){
        rez.num1+=modp;
    }
    return rez;
}
        
