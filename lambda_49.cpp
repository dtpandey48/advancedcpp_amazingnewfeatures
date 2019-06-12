#include <iostream>
using namespace std;

void test(void (*pFunc)() ) {
  pFunc(); 
}

int main() {
    auto func = [](){cout << "Hello"<<endl;}; // type is like a functor
    func();
    [](){cout << "World"<<endl;}();
  
    test();
  
    test([](){cout << "World"<<endl;});
  
    return 0;
}
