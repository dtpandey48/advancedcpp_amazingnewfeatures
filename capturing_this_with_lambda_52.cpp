#include <iostream>

using namespace std;

class Test{
private:
    int one{1};
    int two{2};
    
public:
    void run() {
        int three{3};
        int four{4};
        
        auto pLambda = [this,three,four](){ // cannot access one and two as they are instance variable, we need this
            one  = 111;       // instance variables are now captured by reference
            cout << one << endl;
            cout << two << endl;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();
    }
};

int main() {
    Test test;
    test.run();


    return 0;
}
