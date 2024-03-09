#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9, 10};

    auto equal = [](const int &a, const int &b)
    { return a == b; };

    auto adjFind = std::adjacent_find(v.cbegin(), v.cend(), equal);
    if (adjFind != v.cend())
    {
        std::cout << "Adjacent Elements found at position: " << std::distance(v.cbegin(), adjFind) << "\n";
        std::cout << "Element: " << *adjFind << "\n";
    }

    return 0;
}