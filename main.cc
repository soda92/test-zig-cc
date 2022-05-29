#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::string;
using std::vector;

int main()
{
    vector<string> array = {"Hello", "world"};
    for (const auto &str : array)
    {
        cout << str << "\n";
    }
}