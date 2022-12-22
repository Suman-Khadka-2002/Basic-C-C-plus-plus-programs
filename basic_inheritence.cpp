#include<iostream>
using namespace std;

// Define the base class "Shape"
class Shape{
    public:
        int sides;
    void setSides(int s){
        sides = s;
    }
};

// Define the subclass "Triangle"
class Triangle: public Shape {
    public:
    void printType() {
        cout<<"I am a triangle with "<<sides<<" sides."<<endl;
    }
};

// Define the subclass "Square"
class Square: public Shape {
    public:
    void printType() {
        cout<<"I am a square with "<< sides <<" sides."<<endl;
    }
};

int main()
{
    // Create an object of the Triangle class
    Triangle tri;
    tri.setSides(3);
    tri.printType(); //Output: "I am a triangle with 3 sides."

    // Create an object of the Square class
    Square sq;
    sq.setSides(4);
    sq.printType(); //Output: "I am a square with 4 sides."

    return 0;
}