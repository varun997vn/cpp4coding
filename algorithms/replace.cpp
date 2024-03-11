#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    std::cout << "Original Vector: ";
    println(v1);

    std::replace(v1.begin(), v1.end(), 3, 27);

    std::cout << "After changing 3 to 27: ";
    println(v1);

    return 0;
}