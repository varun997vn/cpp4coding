#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5, 6, 7, 8, 9};
    std::vector<int> v2{5, 6, 7};
    std::cout << "Vector v1: ";
    println(v1);

    auto searchResult = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());

    std::cout << "Search {5, 6, 7} position: " << std::distance(v1.begin(), searchResult) << "\n";

    return 0;
}