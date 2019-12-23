#include <iostream>

int main()
{
    int n, temp, highest = 0, second_highest = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        if (temp > highest)
        {
            second_highest = highest;
            highest = temp;
        }
        else if(temp < highest){
            if (temp > second_highest)
            {
                second_highest = temp;
            }
        }
    }
    std::cout<< second_highest % highest << "\n";
}