// #include <iostream>
// struct Inner {
//   int i;
// };

// const int INNER_NUM = 5;
// class Value {
// private:
// public:
//   Inner *array_;
//   Value() : array_(new Inner[INNER_NUM]) {}
//   Value(Value &val) : array_(new Inner[INNER_NUM]) {
//     for (int j = 0; j < INNER_NUM; j++) {
//       array_[j].i = val.array_[j].i;
//     }
//   };
//   Value &operator=(const Value &val) {
//     for (int j = 0; j < INNER_NUM; j++) {
//       array_[j].i = val.array_[j].i;
//     }
//     return *this;
//   }
// };

// int main() {
//   Value val1;
//   val1.array_[0].i = 1;
//   val1.array_[1].i = 2;
//   val1.array_[2].i = 3;
//   val1.array_[3].i = 4;
//   val1.array_[4].i = 5;

//   Value val2(val1);
//   Value val3 = val1;
//   auto printvec = [](const Value &val) {
//     for (int i = 0; i < INNER_NUM; i++) {
//       std::cout << "Val : " << val.array_[i].i << std::endl;
//     }
//   };

//   printvec(val1);
//   printvec(val2);
//   printvec(val3);

//   return 0;
// }
