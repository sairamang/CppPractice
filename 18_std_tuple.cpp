/*
// 1.Returning Multiple Values from a function
// Using std::tuple<>
// */
// #include <iostream> 
// #include <tuple> 

// std::tuple<int,int,int,int> MathOperations(int a,int b)
// {
//   return std::make_tuple<int,int,int,int>(a+b,a-b,a*b,a/b);
// }
// int main()
// {
//   auto mathOperations = MathOperations(2,3);
//   auto add = std::get<0>(mathOperations);
//   auto sub =  std::get<1>(mathOperations);
//   auto multiply = std::get<2>(mathOperations);
//   auto div = std::get<3>(mathOperations);

//   std::cout<<"Results : "<<std::endl;
//   std::cout<<"============================"<<std::endl;
//   std::cout<<"Add      : "<<add<<std::endl;
//   std::cout<<"Sub      : "<<sub<<std::endl;
//   std::cout<<"multiply : "<<multiply<<std::endl;
//   std::cout<<"Divide   : "<<div<<std::endl;

//   std::cout<<std::endl<<std::endl;

//   int var[4];
//   std::tie(var[0],var[1],var[2],var[3]) = MathOperations(2,3);

//   std::cout<<"Results :"<<std::endl;
//   std::cout<<"============================"<<std::endl;
//   std::cout<<"Add      : "<<var[0]<<std::endl;
//   std::cout<<"Sub      : "<<var[1]<<std::endl;
//   std::cout<<"multiply : "<<var[2]<<std::endl;
//   std::cout<<"Divide   : "<<var[3]<<std::endl;



//   return 0;

// }