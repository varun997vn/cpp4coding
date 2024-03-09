#include <algorithm>
#include <vector>
#include <iostream>
#include "utils.hpp"

int main()
{
    std::vector<int> v{1, 2, 5, 6, 7, 3, 4, 5, 6, 7, 8};
    std::vector<int> g{6, 7, 8};
    std::cout << "Numbers: ";
    println(v);

    // find last occurence of g within v
    auto findSeq = std::find_end(v.cbegin(), v.cend(), g.begin(), g.end());
    bool found = findSeq != v.cend();
    std::cout << "Found: " << found << "\n";
    if (found)
        std::cout << "Sequence found at pos: " << std::distance(v.cbegin(), findSeq) << "\n";

    return 0;
}