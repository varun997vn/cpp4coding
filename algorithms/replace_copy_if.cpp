#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6};
    std::vector<int> v2;

    std::cout << "Original vector: ";
    println(v1);

    auto isOdd = [](int a)
    { return a % 2 != 0; };

    std::replace_copy_if(v1.begin(), v1.end(), std::back_inserter(v2), isOdd, 0);
    std::cout << "Copied vector after replacing odd nos with 0s: ";
    println(v2);

    return 0;
}