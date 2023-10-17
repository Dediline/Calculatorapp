#include "calculator.hpp"

void Interface::hello()
{
    std::cout<<"Hello in our calculator app !)\n"<<"pls, choose what you want to do?\n";
}
void Interface::help()
{   
    std::cout<<"For now, you can only manipulate numbers with 2 in functions : add, subtract, divide, multiply.\n"
    <<"To add 2 numbers of type a, for substract of type s and other...";
}
void Interface::info()
{
    std::cout<<"------------------ This app created by Sviatoslav Naum. All rights reserved ------------------\n";
}
void Interface::clear_scr()
{
    system("cls");
}

int main()
{
    Interface interface;
    interface.hello();
    char type{};
    std::cin>>type;
    switch(type)
    {
        case 'c' : interface.clear_scr(); break;
        case 'h' : interface.help();break;
        case 'i' : interface.info();break;
        default : return -1;
    }
    return 0;
}	