#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v{84, 23, 20, 3, 34, -50, 10, 8};
    std::cout << "Numbers: ";
    println(v);

    auto isDivBy5 = [](auto elem)
    { return elem % 5 == 0; };

    auto divByFive = std::find_if(v.cbegin(), v.cend(), isDivBy5);
    bool found = divByFive != v.cend();
    std::cout << "Found: " << found << "\n";
    if (found)
        std::cout << "First Number divisible by 5: " << (*divByFive) << "\n";

    return 0;
}