// #include <iostream>
// #include <vector>

// int main()
// {
//     std::cout << "Lambda Expression Test" << std::endl;

//     std::vector<int> vec = {1, 2, 3, 4, 5};
//     // print vector
//     auto printvec = [&]() -> void
//     {
//         for (auto &itr : vec)
//         {
//             std::cout << "value :" << itr << std::endl;
//         }
//     };

//     // incr vec
//     auto incrvec = [&]() -> void
//     {
//         std::cout<<"incr vec"<<std::endl;
//         for (auto &itr : vec)
//         {
//             itr++;
//         }
//     };

//     // incrvec2 call by value
//     auto incrvec2 = [vec]()
//     {
//         std::cout<<"incrvec2"<<std::endl;
//         for(int i=0;i<vec.size();i++)
//         {
//             std::cout<<vec[i]<<std::endl;
//         }
//     };

    
//     printvec();
//     incrvec();
//     incrvec2();
//     printvec();
//     return 0;
// }
