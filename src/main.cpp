// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
template <typename T, int Size>
class TPQueue {
  // реализация шаблона очереди с приоритетом на кольцевом буфере
 private:
  T a[Size];
  int n = 0;

 public:
  void push(T item) {
  if (n >= Size) throw "full";
  for (int i = n++; i >= 0; i--)
  if ((i > 0) && (a[i - 1].prior >= item.prior)) {
  a[i] = a[i - 1];
  } else {
  a[i] = item;
  break;
  }
  }
  T pop() {
  if (n <= 0) throw "empty";
  return a[--n];
  }
};

struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
template <typename T, int Size>
class TPQueue {
 private:
  T a[Size];
  int n = 0;

 public:
  void push(T item) {
  if (n >= Size) throw "full";
  for (int i = n++; i >= 0; i--)
  if ((i > 0) && (a[i - 1].prior >= item.prior)) {
  a[i] = a[i - 1];
  } else {
  a[i] = item;
  break;
  }
  }
  T pop() {
  if (n <= 0) throw "empty";
  return a[--n];
  }
};

struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
