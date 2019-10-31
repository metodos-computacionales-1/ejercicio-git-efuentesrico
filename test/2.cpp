#include <iostream>
#include<cmath>

int main(void)
{
    int a;
    int b;
    int c;
    float pi = 3.1416;
    
    std::cout<<"Por favor ingrese el primer numero entero"<<std::endl;
    std::cin>>a;
        
    std::cout<<"Por favor ingrese el segundo numero entero"<<std::endl;
    std::cin>>b;
        
    std::cout<<"Por favor ingrese el primer numero entero"<<std::endl;
    std::cin>>c;
        
    if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a))
    {
        std::cout<< "Los lados son compatibles con un triangulo rectangulo."<<std::endl;
    }
    else
    {
        std::cout<< "Los lados no son compatibles con un triangulo rectangulo."<<std::endl;
    }
    
    return 0;
    
}