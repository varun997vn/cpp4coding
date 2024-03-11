#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    std::cout << "Original Vector: ";
    println(v1);

    auto isOddNumber = [](int a)
    {if (a%2 != 0) return true; return false; };

    std::replace_if(v1.begin(), v1.end(), isOddNumber, 0);

    std::cout << "After changing odd nos to zero: ";
    println(v1);

    return 0;
}