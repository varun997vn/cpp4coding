#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v{3, -4, 2, -8, 15, 267};
    auto print = [](const int &n)
    { cout << n << " "; };

    cout << "before: ";
    for_each(v.cbegin(), v.cend(), print); // cbegin and cend are const iterators.

    auto plusone = [](int &n)
    { n++; };
    for_each(v.begin(), v.end(), plusone); // the value is modified, hence use normal iterators.

    cout << "\nafter: ";
    for_each(v.cbegin(), v.cend(), print);

    cout << "\n";
    return 0;
}