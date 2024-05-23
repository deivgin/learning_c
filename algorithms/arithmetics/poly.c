#include <stdio.h>

int polyAdd(int A[], int B[], int size) { int sum[size]; }

int main(void) {
  int A[] = {5, 0, 10, 6};
  int B[] = {1, 2, 4};
  // output needs to be 6 2 14 6
  //  A is 5x^0 + 0x^1 + 10x^2 + 6x^3
  //  B is 1x^0 + 2x^1 + 4x^2
  size_t aSize = sizeof(A) / sizeof(A[0]);
  size_t bSize = sizeof(B) / sizeof(B[0]);
  size_t size = aSize > bSize ? aSize : bSize;

  polyAdd(A, B, size);
}
