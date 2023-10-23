#include "calculator.hpp"

int main()
{
    Interface interface;
    interface.hello();
    char type{};   
    std::cin>>type;

    Logic logic;
    auto a{0.0},b{0.0};
    std::cin>>a>>b;

    switch(type)
    {
        case 'c' : interface.clear_scr(); break;
        //case 'h' : interface.help();break;
        case 'i' : interface.info();break;
        case 'a' : logic.add(a,b);system("pause");break;
        case 'd' : logic.divide(a,b);system("pause");break;
        case 'm' : logic.multiply(a,b);system("pause");break;
        case 's' : logic.substract(a,b); system("pause");break;
        default : return -1;
    }
    return 0;
}	