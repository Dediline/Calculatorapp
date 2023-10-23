#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
#include <cmath>
#include <iostream>

class Logic
{
public:
    template<class T, class  U>
    auto add(T a, U b)
    {
        if(!std::isnan(a) && !std::isnan(b))
            std::cout<<a+b<<std::endl;
        else
            std::cout<<"you'r numbers is not NaN\n";
    }

    template<class U, class K>
    auto substract(U a, K b)
    {
         if(!std::isnan(a) && !std::isnan(b))
            std::cout<<a-b<<std::endl;
         else
            std::cout<<"you'r numbers is not NaN\n";
    }

    template<class K, class G>
    auto multiply(K a, G b)
    {
        if(!std::isnan(a) && !std::isnan(b))
            std::cout<<a*b<<std::endl; 
        else
            std::cout<<"you'r numbers is not NaN\n";  
    }

    template<class L,class A>
    auto divide(L a, A b)
    {
        if(!std::isnan(a) && !std::isnan(b))
            {
                if(a == 0 || b == 0)
                    std::cout<<"ERROR :  u want divide by 0\n";
                else
                    std::cout<<a/b<<std::endl;
            }
        else
            std::cout<<"you'r numbers is not NaN\n";
    }
};

class Interface
{
public :
    static void hello(){std::cout<<"Hello in our calculator app !)\n\tFor now, you can only manipulate numbers with 2 in functions : add, subtract, divide, multiply.\n"
    <<"To add 2 numbers of type a, for substract of type s and other..."<<"pls, choose what you want to do?\n";}
    /*static void help(){ std::cout<<"For now, you can only manipulate numbers with 2 in functions : add, subtract, divide, multiply.\n"
    <<"To add 2 numbers of type a, for substract of type s and other...";}*/
    static void clear_scr(){system("cls");}
    static void info(){ std::cout<<"------------------ This app created by Sviatoslav Naum. All rights reserved ------------------\n";}
};
#endif