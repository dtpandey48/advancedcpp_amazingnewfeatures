#include <iostream>
using namespace std;

void testGreet(void (*greet)(string) ) {
    greet("Adam");
}

void runDivide(double (*divide)(double a, double b)) {
    cout << divide(20.0,5.0) << endl; 
}

int main() {
    auto pGreet = [](string name){cout << "Hello" << name <<endl;}; // type is like a functor
  
    pGreet("Mike");
  
    testGreet(pGreet);
  
    auto pDivide = [](double a, double b) -> double { // -> tells what return type do we want otherwise 0 being an int will give error
        if (b == 0.0) {
          return 0;
        }
        return a/b;
    };
  
    cout << pDivide(10.0,5.0) << endl;
    cout << pDivide(10.0,0) << endl;
   
    runDivide(pDivide);
    return 0;
}
