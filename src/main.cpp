#include "calculator.hpp"

void Interface::hello()
{
    std::cout<<"Hello in our calculator app !)"<<"\n"<<"pls, choose what you want to do?\n";
}
void Interface::help()
{   
    std::cout<<"For now, you can only manipulate numbers with 2 in functions : add, subtract, divide, multiply.\n"
    <<"To add 2 numbers of type a, for substract of type s and other...";
}
void Interface::info(){}
void Interface::clear_scr(){}

int main()
{
    Interface interface;
    interface.hello();
    
}	