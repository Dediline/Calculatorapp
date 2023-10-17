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
        if(std::isnan(a) && std::isnan(b))
            std::cout<<a+b<<"\n";
        else
            std::cout<<"you'r numbers is not NaN\n";
    }

    template<class U, class K>
    auto substract(U a, K b)
    {
         if(std::isnan(a) && std::isnan(b))
            std::cout<<a-b<<"\n";
         else
            std::cout<<"you'r numbers is not NaN\n";
    }

    template<class K, class G>
    auto multiply(K a, G b)
    {
        if(std::isnan(a) && std::isnan(b))
            std::cout<<a*b<<"\n"; 
        else
            std::cout<<"you'r numbers is not NaN\n";  
    }

    template<class L,class A>
    auto divide(L a, A b)
    {
        if(std::isnan(a) && std::isnan(b))
            std::cout<<a/b<<"\n";
        else
            std::cout<<"you'r numbers is not NaN\n";
    }
};

class Interface
{
public :
    void hello();
    void help();
    void clear_scr();
    void info();
};
#endif