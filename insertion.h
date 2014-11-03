#pragma once
#include <algorithm>

template <typename T>
void insertion_sort(T *a, T *b)
{
  for (T *p = a+1; p < b; ++p) {
    T *q = p;
    while (q != a && *q < *(q-1)) {
      std::swap(*q, *(q-1));
      --q;
    }
  }
}
