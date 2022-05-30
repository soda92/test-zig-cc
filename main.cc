#include <array>
#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::string;

int main()
{
    std::array<int, 3> arr({1,2,3});
    for (const auto &i : arr)
    {
        cout << i << "\n";
    }
}