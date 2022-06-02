#include <array>
#include <iostream>
#include <string>
#include <vector>


using std::cout;
using std::string;

int main() {
  std::vector<std::string> arr = {"Hello", "world"};
  for (const auto &i : arr) {
    cout << i << "\n";
  }
}