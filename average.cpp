#include <iostream>

int main()
{
    double num1 = 28;
    double num2 = 32;
    double num3 = 37;
    double num4 = 24;
    double num5 = 33;
    
    double sum = num1 + num2 + num3 + num4+ num5;
    double average = sum / 5;
    std::cout<<"The sum is "<<sum<<"\n";
    std::cout<<"The average is "<<average<<"\n";

    return 0;
}