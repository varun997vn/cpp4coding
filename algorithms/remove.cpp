#include <algorithm>
#include <string>
#include <iostream>

int main()
{
    std::string str{"Hi Varun, this is Varun. This is a sample sentence with spaces."};
    std::cout << "Original String: " << str << "\n";

    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    std::cout << "String after removing spaces: " << str << "\n";

    return 0;
}