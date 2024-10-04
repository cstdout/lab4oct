#include <iostream>
#include <climits>
int main() {
    int min = INT_MAX;
    std::cout << "Enter ten positive numbers" << std::endl;
    int num;
    for(int i = 0; i < 10; ++i)
    {
        std::cin >> num;
        if (num > -1 && min > num)
        {
            min = num;
        }
    }
    std::cout << min << std::endl;
    return 0;
}
