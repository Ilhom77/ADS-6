// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T arr[100];
  int ft, lt;
 public:
  TPQueue() : ft(0), lt(0) {}
  void push(T p) {
    int znach = lt++;
    while ((--znach >= ft) && (arr[znach % size].prior < p.prior)) {
      arr[(znach + 1) % size] = arr[znach % size];
    }
    arr[(znach + 1) % size] = p;
  }
  T pop() {
    return arr[(ft++) % size];
  }
};
struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
