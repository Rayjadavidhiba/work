//series recursion pointer
#include <iostream.h>

void printSeries(int* ptr, int n)
{
  if (*ptr > n) {
    return;
}
  cout << *ptr << " ";
  (*ptr)++;
  printSeries(ptr, n);
}

int main() {
  int num = 1;
  int* ptr = &num;
  printSeries(ptr, 10);
  return 0;
}
