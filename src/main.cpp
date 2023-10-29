#include "../../../C++/Calculatorapp/src/incl/calculator.hpp"

/*
void InterrputSig(int sig)
{
  exit(sig);
}
*/

int main()
{
   
    Inter inter;
    inter.hello();
    char type{};   
    std::cin>>type;

    Logic logic;
    auto a{0.0}; auto b{0.0};
    std::cin>>a>>b;

    switch(type)
    {
        case 'c' : inter.clear_scr();break;
        //case 'h' : interface.help();break;
        case 'i' : inter.info();break;
        case 'a' : logic.add(a,b);break;
        case 'd' : logic.divide(a,b);break;
        case 'm' : logic.multiply(a,b);break;
        case 's' : logic.substract(a,b);break;
        default : return -1;
    }
    return 0;
}	