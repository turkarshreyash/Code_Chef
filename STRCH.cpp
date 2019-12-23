#include <iostream>
#include <string>
int main()
{
    int t, n, sum, total, prev;
    std::string arr;
    char x;
    std::cin >> t;
    while (t--)
    {
        total = 0;
        sum = 0;
        prev = -1;
        std::cin >> n >> arr >> x;
        std::cout<<arr<<std::endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                total++;
                if (prev != -1)
                {
                    sum += (prev) + (i - 1 - prev) + (prev * (i - 1 - prev));
                }
                prev = i;
            }
        }
        if (prev != -1)
        {
            sum += (prev) + (n - 1 - prev) + (prev * (n - 1 - prev));
            sum += total;
        }
        std::cout << sum << "\n";
    }
}