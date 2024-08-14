// #include <exception>
// #include <iostream>
// using namespace std;
// int val;
// class myexception1 : public exception {};
// class myexception2 : public exception {};
// class myexception3 : public exception {};
// class myexception4 : public exception {};
// void getValue() {
//   if (val == 1) {
//     throw myexception1();
//   }
//   if (val == 2) {
//     throw myexception2();
//   }
//   if (val == 3) {
//     throw myexception3();
//   }
//   if (val == 4) {
//     throw myexception4();
//   }
// }
// int main() {
//   cout << "Enter value" << endl;
//   cin >> val;
//   try {
//     getValue();
//   }

//   catch (myexception1 &e) {
//     cout << "Exception 1 caught" << endl;
//     cerr << e.what() << endl;
//   } catch (myexception2 &e) {
//     cout << "Exception 2 caught" << endl;
//     cerr << e.what() << endl;

//   } catch (myexception3 &e) {
//     cout << "Exception 3 caught" << endl;
//     cerr << e.what() << endl;
//   } catch (...) {
//     cout << "General exception catch" << endl;
//   }

//   return 0;
// }