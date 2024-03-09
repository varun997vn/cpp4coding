#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> naturalNos{1, 2, 3, 4, 5, 6, 7, 8};

    auto isPositive = [](auto e)
    { return e > 0; };

    auto isEven = [](auto e)
    { return e % 2 == 0; };

    std::cout << "Numbers: ";
    println(naturalNos);

    std::cout << "Is All Positive: ";
    bool isAllPositive = std::all_of(naturalNos.cbegin(), naturalNos.cend(), isPositive);
    std::cout << isAllPositive << "\n";

    std::cout << "Is All Even: ";
    bool isAllEven = std::all_of(naturalNos.cbegin(), naturalNos.cend(), isEven);
    std::cout << isAllEven << "\n";

    return 0;
}