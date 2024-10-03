#include <iostram>
#include <string>

int main()
{

    std::cout << "Enter time duration" << std::endl;
    int duration;
    std::cin >> duration;
    
    std::cout << "Enter unit" << std::endl;
    std::string unit;
    std::cin >> unit;
    
    float converted = -1;
    std::string convertedTo;

    if(unit == "seconds")
    {
        convertedTo = "minutes";
        converted = duration / 60.0f;
    }
    else if(unit == "minutes")
    {
        convertedTo = "hours";
        converted = duration / 60.0f;
    }
    else if(unit == "hours")
    {
        convertedTo = "days";
        converted = duration / 24.0f;
    }
    else 
    {
        std::cout << "Incorrect unit" << std::endl;
    }
    if (converted > -1)
    {
        std::cout << converted << ' ' << convertedTo << std::endl;
    }
  return 0;
}
