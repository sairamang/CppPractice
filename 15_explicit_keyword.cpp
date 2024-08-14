// #include <iostream>
// /*
//   Explicit Keyword in C++ is used to mark constructors to not implicitly convert types in C++. It is optional for constructors that take exactly one argument and work on constructors(with a single argument) since those are the only constructors that can be used in typecasting.*/


// class Complex 
// {
// double real;
// double imag;
// public:
//   explicit Complex(double real=1.0,double imag=2.0)
//   {
//     this->real=real;
//     this->imag=imag;
//   }
// bool operator == (Complex rhs)
// {
//     return (real == rhs.real && 
//             imag == rhs.imag);
// }
// };

// int main()
// {

//   Complex obj(1,2);

//   if(obj==1.0) //Error in creating complex obj from 1.0
//   {
//     std::cout<<"Same"<<std::endl;
//   }
//   return 0;
// }