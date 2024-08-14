// #include <iostream>
// using namespace std;

// int main()
// {
//   volatile char memory_mapped_port;
//   int x=97;
//   const char* ptr = reinterpret_cast<const char*>(&x);
//   cout<<"size of int "<<sizeof(int)<<endl;
//   for(int i=0;i<sizeof(int);i++)
//   {
//       memory_mapped_port=ptr[i];
//   }
//   cout<<"Char :"<<memory_mapped_port<<endl;
//   return 0;
// }