#include <iostream>
#include <cmath>
int main() {
    
    float a, b;
    std::cout << "Enter the first number" << std::endl;
    std::cin >> a;
    
    std::cout << "Enter the second number" << std::endl;
    std::cin >> b;
    
    if (fabs(a - b) < 0.001)
    {
        std::cout << "Close";
    }
    else 
    {
        std::cout << "Not close";
    }
    
    
    return 0;
}
