#include <iostram>

int main()
{
   int gramms = -1;
    do {
      std::cout << "Enter the value in gramms" << std::endl;
      std::cin >> gramms;
      if (gramms < 0)
      {
            std::cout << "Value must be positive" << std::endl;
      } 
    } while(gramms < 0);
    
    float kilogramms = (float)gramms / 1000.0f;
    std::cout << "Kilogramms: " <<  kilogramms << std::endl;
    return 0;
}
