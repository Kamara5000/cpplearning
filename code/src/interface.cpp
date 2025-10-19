#include <iostream>

//interface is use to define a contract that derived classes must follow
class IShape {
public:
    virtual ~IShape() = default;           // virtual destructor
    virtual double area() const = 0;       // pure virtual -> makes the class abstract
    virtual double perimeter() const = 0;
};

class Circle : public IShape {
    double r;
public:
    explicit Circle(double radius) : r(radius) {}
    double area() const override { return 3.141592653589793 * r * r; }
    double perimeter() const override { return 2 * 3.141592653589793 * r; }
};


std::unique_ptr<IShape> s = std::make_unique<Circle>(1.0);
double a = s->area();