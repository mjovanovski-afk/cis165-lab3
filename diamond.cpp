#include <iostream>
#include <iomanip>

int main()
{
    std::cout<<std::setw(5)<<"*\n";
    std::cout<<std::setw(6)<<"***\n";
    std::cout<<std::setw(7)<<"*****\n";
    std::cout<<"*******\n";//setw not needed since theres no spaces
    std::cout<<std::setw(7)<<"*****\n";
    std::cout<<std::setw(6)<<"***\n";
    std::cout<<std::setw(5)<<"*\n";


    return 0;
}