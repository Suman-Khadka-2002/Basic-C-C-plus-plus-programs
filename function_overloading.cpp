#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int findMax(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

// Function to find the maximum of three integers
int findMax(int x, int y, int z) {
  return findMax(findMax(x, y), z);
}

int main() {
  cout << "The maximum of 3 and 4 is: " << findMax(3, 4) << endl;
  cout << "The maximum of 3, 4, and 5 is: " << findMax(3, 4, 5) << endl;
  return 0;
}


// This program defines two functions with the same name, findMax, but with different parameter lists. The first function takes in two integers and returns the maximum of the two. The second function takes in three integers and returns the maximum of the three by calling the first function twice.

// In the main function, the program demonstrates the use of both versions of the findMax function by calling them with different numbers of arguments.