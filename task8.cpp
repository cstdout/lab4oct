#include <iostream>
#include <cstdlib>
int main() {
    int i = 0;
    while(i <= 6)
    {
        if(i != 3 && i != 6)
        {
            std::cout << i << std::endl;
        }
        ++i;
    }
    return 0;
}
