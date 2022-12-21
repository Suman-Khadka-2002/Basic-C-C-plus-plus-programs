// calculate Area of rectangle using oop concept

#include<iostream>
using namespace std;

// Define the Rectangle class
class Rectangle{
    public:
    int width, height;

    void setWidth(int w){
        width = w;
    }

    void setHeight(int h){
        height = h;
    }

    int getArea(){
        return width*height;
    }
};

int main(){
    // Create an object of the Rectangle class
    Rectangle rect;

    // Set width and height of the rectangle
    rect.setWidth(4);
    rect.setHeight(5);

    // Prints the area of rectangle
    cout<<"The area of the rectangle is: "<<rect.getArea()<<endl;
    return 0;
}