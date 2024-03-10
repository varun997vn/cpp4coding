#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v{1, 2, 3, 3, 3, 3, 4, 5, 5, 6};
    std::cout << "List: ";
    println(v);

    std::cout << "Number of 3s: " << std::count(v.begin(), v.end(), 3) << "\n";
    return 0;
}