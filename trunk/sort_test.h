#pragma once

template <typename F>
int sort_test(F f) {
  int m[] = {6, 5, 3, 1, 8, 7, 2, 4};
  const int n = sizeof(m)/sizeof(m[0]);
  
  f(m, m+n);

  for (int i = 0; i < n; ++i)
    if (m[i] != i+1)
      return 0;

  return 1;
}

