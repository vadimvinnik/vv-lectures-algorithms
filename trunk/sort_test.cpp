#include <assert.h>
#include "insertion.h"
#include "selection.h"
#include "sort_test.h"

int main() {
  assert(sort_test(insertion_sort<int>));
  assert(sort_test(selection_sort<int>));

  return 0;
}
