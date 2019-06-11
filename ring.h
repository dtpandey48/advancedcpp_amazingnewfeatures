
#include <iostream>
using namespace std;

//template<typename T> works same as class
template <class T>
class ring {
 
  public:
      class iterator;
      
};

template<class T>
class ring<T>::iterator { // we want the ring to use the template of ring template class, hence we pass the T
        public:
            void print() {
             << "Hello from iterator" << T() << endl; // T() will put default value since it is a constructor
            }
      };

/*void ring::iterator::print() {
             << "Hello iterator" << endl; 
}*/
