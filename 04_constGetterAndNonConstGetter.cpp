#include <iostream>
// using namespace std;
// class Bar {
// public:
//   int a;
// };
// class Foo {
//   Bar b;

// public:
//   Bar &GetBar() {
//     cout<<"Get Bar 1"<<endl;
//     return const_cast<Bar &>(const_cast<const Foo *>(this)->GetBar());
//   }
//   const Bar &GetBar() const {
//     cout<<"Get Bar 2"<<endl;
//     return b; }
// };

// int main()
// {
//   Foo f;
//   const Foo f2(f);
//   f.GetBar();
//   f2.GetBar();

//   return 0;

// }