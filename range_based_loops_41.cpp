#include <iostream>
#include <vector>
using namespace std;

int main() {
    auto texts = {"one", "two", "three"};
    for (auto text: texts) {
        cout << text << endl;
    }
    
    vector <int> numbers;
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
  return 0;
}
