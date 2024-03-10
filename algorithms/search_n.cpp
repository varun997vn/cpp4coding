#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v1{1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 8, 6, 7, 8, 9, 10, 5, 6, 7, 8, 9};
    std::cout << "Vector v1: ";
    println(v1);

    auto searchNResult = std::search_n(v1.begin(), v1.end(), 4, 5);
    bool found = searchNResult != v1.end();

    std::cout << "Search four consecutive 5s success: " << found << "\n";

    if (found)
    {
        std::cout << "Found position: " << std::distance(v1.begin(), searchNResult) << "\n";
        std::cout << "Sequence result: ";

        for (auto itr = searchNResult; itr != searchNResult + 5; itr++)
        {
            std::cout << *itr << " ";
        }
        std::cout << "\n";
    }

    return 0;
}