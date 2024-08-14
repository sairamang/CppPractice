#include <iostream>

// class virtualbase
// {
// public:
//   virtual ~virtualbase(){
//   std::cout<<"Calling virtual base"<<std::endl;  
//   }
// };
// class virtualderived:public virtualbase 
// {
// public:
// ~virtualderived()
// {
//   std::cout<<"Calling derived destructor"<<std::endl;
// }
// };
// class protectedBase
// {
// protected: 
// ~protectedBase()
// {
//   std::cout<<"protected base"<<std::endl;
// }

// };
// class protectedDestructor:public protectedBase 
// {
// public: 
// ~protectedDestructor()
// {
//   std::cout<<"protected derived destructor"<<std::endl;
// }

// };


// int main()
// {
//   virtualbase* ptr = new virtualderived();

//   delete(ptr);

//   protectedBase* ptr2 = new protectedDestructor();
//   delete static_cast<protectedDestructor*>(ptr2);
//   return 0;
// }