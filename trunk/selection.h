#pragma once
#include <algorithm>

template <typename T>
void selection_sort(T *a, T *b) {
  for (T *p = a; p+1 < b; ++p) {
    T *m = p;

    for (T *q = p+1; q < b; ++q)
      if (*q < *m)
        m = q;

    std::swap(*p, *m);
  }
}

