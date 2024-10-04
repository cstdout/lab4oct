#include <iostream>
int main() {
    
    std::cout << "Enter the scores" << std::endl;
    int score = 0, count = 0, sum = 0, aCount = 0;
    while (score > -1)
    {
        std::cin >> score;
        if (score < 0)
        {
            break;
        }
        if (score >= 90)
        {
            ++aCount;
        }
        sum += score;
        ++count;
    }
    std::cout << "A marks: " << aCount << std::endl << "Average: " << ((float)sum / (float) count) << std::endl;
    
    return 0;
}
