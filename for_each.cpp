#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{3, -4, 2, -8, 15, 267};
    auto print = [](const int &n)
    { std::cout << n << " "; };

    std::cout << "before: ";
    std::for_each(v.cbegin(), v.cend(), print); // cbegin and cend are const iterators.

    auto plusone = [](int &n)
    { n++; };
    std::for_each(v.begin(), v.end(), plusone); // the value is modified, hence use normal iterators.

    std::cout << "\nafter: ";
    std::for_each(v.cbegin(), v.cend(), print);

    std::cout << "\n";
    return 0;
}