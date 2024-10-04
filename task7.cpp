#include <iostream>
#include <cstdlib>
int main() {
   srand(time(0)); 
   int r = rand() % 10, n = -1;
  
   while (r != n)
   {
        std::cout << "Guess the number" << std::endl;
        std::cin >> n;
        if (r != n)
        {
            std::cout << "Try again" << std::endl;
        }
   }
    std::cout << "Number has been guessed" << std::endl;
    return 0;
}
