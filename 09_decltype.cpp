// #include <iostream>
// int f()
// {
//   return 42;
// }
// int& g()
// {
//   static int x=30;
//   return x;
// }

// int main()
// {
//   int x=20;
//   using namespace std;
//   decltype(f())  a = f(); // a has type int
//   decltype(g()) b= g(); // b has type int&
//   decltype(x) c =x;// c has type int& // x is l value is int&

//   cout<<a<<b<<c<<endl;
//   return 0;
// }