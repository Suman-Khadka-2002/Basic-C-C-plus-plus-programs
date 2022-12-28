#include <iostream>
using namespace std;

// Class with a static member variable
class Counter {
private:
  static int count;

public:
  Counter() {
    count++;
  }

  static int getCount() {
    return count;
  }
};

// Static member variable definition
int Counter::count = 0;

int main() {
  Counter c1;
  Counter c2;
  Counter c3;

  cout << "Number of objects: " << Counter::getCount() << endl;

  return 0;
}
