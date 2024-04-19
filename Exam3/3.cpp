#include <iostream>
using namespace std;

class Shape {
protected:
    float width;
    float height;

public:
    Shape(float w, float h) : width(w), height(h) {}

    virtual float area() = 0;
};

class Triangle : public Shape {
public:
    Triangle(float w, float h) : Shape(w, h) {}

    float area()  {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : Shape(w, h) {}

    float area()  {
        return width * height;
    }
};

int main() {
    float triangleWidth, triangleHeight, rectangleWidth, rectangleHeight;

    cout << endl << "Enter the width of the triangle: ";
    cin >> triangleWidth  ;
    
    cout << "Enter the height of the triangle: ";
    cin >> triangleHeight  ;

    cout << endl << "Enter the width of the rectangle: ";
    cin >> rectangleWidth  ;

    cout << "Enter the height of the rectangle: ";
    cin  >> rectangleHeight ;

    Triangle triangle(triangleWidth, triangleHeight);

    Rectangle rectangle(rectangleWidth, rectangleHeight);

    cout << endl << "Area of triangle: " << triangle.area() << endl;

    cout << "Area of rectangle: " << rectangle.area() << endl;

    return 0;
}