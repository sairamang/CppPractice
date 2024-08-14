#include <iostream>

// class Shape {
// public:
//   Shape(){};
//   virtual ~Shape() = default;
//   virtual double get_surface() const =0;
//   virtual void describe_object() const {
//     std::cout << "THis is a shape" << std::endl;
//   }
//   double get_doubled_surface() const { return 2 * get_surface(); }
// };

// class Square : public Shape {
//   int top_left;
//   double side_length;

// public:
//   Square(const int &top_left, double side)
//       : top_left(top_left), side_length(side) {}

//   double get_surface() const override { return side_length * side_length; }
//   void describe_object() const override {
//     std::cout << "this is a square starting at  " << top_left << "  side len"
//               << side_length << std::endl;
//   }
// };

// class Circle : public Shape {
//   float radius;

// public:
//   Circle(float rad) : radius(rad) {}
//   double get_surface() const override { return radius * radius * 3.14; }
//   void describe_object() const override {
//     std::cout << "this is a circle radius  of  " << radius << std::endl;
//   }
// };
// int main() {
//   Square square_obj(10, 6);
//   square_obj.describe_object();

//   Circle circle_obj(2);
//   circle_obj.describe_object();

//   Shape *ps = nullptr;
//   ps = &circle_obj;
//   ps->describe_object();
//   ps = &square_obj;
//   ps->describe_object();
//   return 0;
// }