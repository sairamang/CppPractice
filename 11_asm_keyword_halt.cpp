// #include <iostream>
// #include <thread>
// #include <unistd.h>
// #include <atomic>
// using namespace std;
// void halt_system()
// {
//   cout<<"Halting system"<<endl;
//   asm("hlt");
// }
// std::atomic_bool run_thread(true);
// void print()
// {
//   cout<<"Calling print()"<<endl;

// while(run_thread)
//   {
//     cout<<"Printing ... "<<endl;
//     usleep(100000);
//   }
// }
// int main()
// {
//   cout<<"Enter input i "<<endl;
//   int i=0;
//   thread t(print);
//   while(i!=1)
//   {
//     cin>>i;
//     cout<<"Got value "<<i<<endl;
//     if(i==2)
//     {
//       cout<<"Calling halt"<<endl;
//       halt_system();
//     }
//   }
//   cout<<"Joining thread"<<endl;
//   run_thread=false;
//   t.join();
//   run_thread=false;
//   return 0;
// }