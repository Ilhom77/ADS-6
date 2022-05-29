// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
template <typename T, int Size>
class TPQueue {
 private:
  T a[Size];
  int v = 0;

 public:
  void push(T item) {
  if (v>= Size) throw "full";
  for (int i = v++; i >= 0; i--)
  if ((i > 0) && (a[i - 1].prior >= item.prior)) {
  a[i] = a[i - 1];
  } else {
  a[i] = item;
  break;
  }
  }
  T pop() {
  if (v <= 0) throw "empty";
  return a[--v];
  }
};

struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
