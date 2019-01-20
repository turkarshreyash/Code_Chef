#include <iostream>
int main()
{
    long long t, a, b, n, common, bob, alice, temp;
    std::cin >> t;
    while (t--)
    {
        common = bob = alice = 0;
        std::cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            std::cin >> temp;
            if (temp % a == 0)
            {
                bob++;
            }
            if (temp % b == 0)
            {
                alice++;
            }
            if (temp % a == 0 && temp % b == 0)
            {
                common++;
            }
        }
        if (common)
        {
            bob++;
        }
        if (bob > alice)
        {
            std::cout << "BOB\n";
        }
        else
        {
            std::cout << "ALICE\n";
        }
    }
}