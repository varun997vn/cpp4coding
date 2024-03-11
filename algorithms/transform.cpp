#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4};
    std::vector<int> v2;

    std::cout << "Original Vector: ";
    println(v1);

    auto square = [](int a)
    { return a * a; };

    std::transform(v1.begin(), v1.end(), std::back_inserter(v2), square);

    std::cout << "Transformed Vector: ";
    println(v2);

    return 0;
}