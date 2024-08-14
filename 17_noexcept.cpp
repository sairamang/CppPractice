// /*
// Noexcept tells the caller that whether the operand mentioned in the noexcept() ,
// can propagate a exception or not.

// //If noexcept is mentioned in the function call , then it means that a function
// cannot let a exception out of it.
// */

// #include <iostream>
// #include <stdexcept>

// void foo() {
//   try {
//     throw std::runtime_error("oops");
//   } catch (...) {
//     std::cout << "Caught exception " << std::endl;
//   }
// }
// void bar() noexcept(true) {}
// struct S {};
// int main() {
//   std::cout << noexcept(foo()) << '\n' << std::endl;
//   std::cout << noexcept(bar()) << '\n' << std::endl;
//   std::cout << noexcept(1 + 1) << '\n' << std::endl;
//   std::cout << noexcept(S()) << '\n' << std::endl;
//   return 0;
// }