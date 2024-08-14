// #include <iostream>

// int main()
// {

//   int a=0;

//   // auto bad_counter = [a]{
//   //   a++;
//   // };

//   auto good_counter = [&a]() mutable 
//   {
//     a++;
//   };

//     good_counter();
//   std::cout<<a<<std::endl;

//   return 0;
// }