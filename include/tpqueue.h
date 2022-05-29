// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
template<typename T, int size>
class TPQueue {
 private:
  T a[size] = {0};
  int first, last;
 public:
  void push(T x) {
    int n = last;
    for (; (n >= first) && a[n % size].prior < x.prior; --n) {
      a[(n + 1) % size] = a[n % size];
    }
    a[(n + 1) % size] = x;
    ++last;
  }
  T pop() {
    return a[(first++) % size];
  }
};
struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
