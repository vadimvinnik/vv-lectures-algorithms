#include <assert.h>
#include "sort_test.h"
#include "insertion.h"
#include "selection.h"
#include "bubble.h"

int main() {
  assert(sort_test(insertion_sort<int>));
  assert(sort_test(selection_sort<int>));
  assert(sort_test(bubble_sort<int>));

  return 0;
}
