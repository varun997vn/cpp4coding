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
    vector<int> v{12, 14, -34, 23, 67};
    cout << "before: ";
    println(v);

    auto multiply2 = [](auto &e)
    { e *= 2; };
    for_each_n(v.begin(), 3, multiply2); // only apply to the first 3 elems

    cout << "after: ";
    println(v);
    return 0;
}