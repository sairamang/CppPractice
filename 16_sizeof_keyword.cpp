// #include <iostream>
// #include <cstring>
// template <class... T>

// void func(T&&...)
// {
//   std::cout<<"f was called with "<<sizeof...(T)<<std::endl;
// }

// int main()
// {
//   int a[100];
//   std::cout<<"Number of bytes: "<<sizeof(a)<<std::endl;
//   memset(a,0,sizeof(a));
//   func(1,2,3,4);
//   return 0;
// }