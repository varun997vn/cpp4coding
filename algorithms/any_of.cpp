#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector naturalNos{1, 2, 3, 4, 5, 6, 7, 8};

    auto isPositive = [](auto e)
    { return e > 0; };

    auto isEven = [](auto e)
    { return e % 2 == 0; };

    std::cout << "Numbers: ";
    println(naturalNos);

    std::cout << "Is Any Positive: ";
    bool isAnyPositive = std::any_of(naturalNos.cbegin(), naturalNos.cend(), isPositive);
    std::cout << isAnyPositive << "\n";

    std::cout << "Is Any Even: ";
    bool isAnyEven = std::any_of(naturalNos.cbegin(), naturalNos.cend(), isEven);
    std::cout << isAnyEven << "\n";

    return 0;
}