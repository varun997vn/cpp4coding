#include <vector>
#include <iostream>

void println(std::vector<int> &v)
{
    for (auto count{v.size()}; auto elem : v)
    {
        std::cout << elem << (--count ? ", " : "\n");
    }
}