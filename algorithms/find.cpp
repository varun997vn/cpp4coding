#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << "Numbers: ";
    println(v);

    auto five = std::find(v.cbegin(), v.cend(), 5);
    bool found = five != v.cend();
    std::cout << "Found: " << found << "\n";
    if (found)
        std::cout << "Five is at pos: " << std::distance(v.cbegin(), five) << "\n";

    return 0;
}