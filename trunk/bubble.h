#pragma once
#include <algorithm>

template <typename T>
void bubble_sort(T *a, T *b) {
  for (T *p = b-1; p > a+1; --p)
    for (T *q = a; q < p; ++q)
      if (*q > *(q+1))
        std::swap(*q, *(q+1));
}

