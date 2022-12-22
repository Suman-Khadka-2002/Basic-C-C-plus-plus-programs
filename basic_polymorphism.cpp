#include <iostream>

using namespace std;

// Define the base class "Shape"
class Shape {
  public:
    virtual void draw() {
      cout << "Drawing a shape..." << endl;
    }
};

// Define the subclass "Circle"
class Circle: public Shape {
  public:
    void draw() {
      cout << "Drawing a circle..." << endl;
    }
};

// Define the subclass "Rectangle"
class Rectangle: public Shape {
  public:
    void draw() {
      cout << "Drawing a rectangle..." << endl;
    }
};

int main() {
  // Create an array of pointers to Shape objects
  Shape* shapes[3];

  // Initialize the array with objects of the Circle and Rectangle classes
  shapes[0] = new Circle();
  shapes[1] = new Rectangle();
  shapes[2] = new Circle();

  // Call the draw method for each object
  for (int i = 0; i < 3; i++) {
    shapes[i]->draw();
  }

  return 0;
}
