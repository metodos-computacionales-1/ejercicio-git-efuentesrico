#include <iostream>
#include<cmath>

int main(void)
{
    float R;
    float pi = 3.1416;
    std::cout<<"Diga el radio"<<std::endl;
    std::cin>>R;
    
    float d = 2*R;
    float p = 2*pi*R;
    float a = pi*R*R;
        
    std::cout<<"El diametro es "<< d<<std::endl;
    std::cout<<"El perimetro es "<< p<<std::endl;
    std::cout<<"El area es "<< a<<std::endl;
    
    return 0;
}