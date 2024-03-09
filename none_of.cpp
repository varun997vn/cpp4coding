#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

void println(vector<int> &v)
{
    for (auto count{v.size()}; auto elem : v)
    {
        cout << elem << (--count ? ", " : "\n");
    }
}

int main()
{
    vector naturalNos{1, 2, 3, 4, 5, 6, 7, 8};

    auto isPositive = [](auto e)
    { return e > 0; };

    auto isEven = [](auto e)
    { return e % 2 == 0; };

    cout << "Numbers: ";
    println(naturalNos);

    cout << "Is None Positive: ";
    bool isAnyPositive = none_of(naturalNos.cbegin(), naturalNos.cend(), isPositive);
    cout << isAnyPositive << "\n";

    cout << "Is None Even: ";
    bool isNoneEven = none_of(naturalNos.cbegin(), naturalNos.cend(), isEven);
    cout << isNoneEven << "\n";

    return 0;
}