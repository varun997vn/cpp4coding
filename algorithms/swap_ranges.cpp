#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5, 6};

    std::cout << "Original vectors:\n";
    std::cout << "v1: ";
    println(v1);
    std::cout << "v2: ";
    println(v2);

    std::swap_ranges(v1.begin(), v1.begin() + 2, v2.begin());

    std::cout << "New vectors:\n";
    std::cout << "v1: ";
    println(v1);
    std::cout << "v2: ";
    println(v2);

    return 0;
}