#include <iostream>
using namespace std;

//template<typename T> works same as class
template <class T>
class ring {
  private:  
      int m_pos;
      int m_size;
      T *m_values;
  public:
      class iterator;
   
  public
      ring(int size): m_pos(0); m_size(size), m_values(NULL) {// constructor with data initialization, we can replace NULL with 0
                                                    // the order of variales matter
          m_values = new T[size]; 
      }
 
      ~ring() {
          delete[] m_values;
      }
 
      int size() {
         return m_size;
      }
 
      void add(T value) {
         m_values[m_pos] = value;
          
         ++m_pos;
         m_pos = m_pos % m_size;
      }
      
       T &get(int i) {
          return m_values[i];
       }
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
