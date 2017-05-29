// Program 8.15: Illustrating static and automatic variables
#include <stdio.h>

void auto_static() {
  int autoVar = 1;
  static int staticVar = 1;

  printf("automatic = %i, static = %i\n", autoVar, staticVar);

  ++autoVar;
  ++staticVar;
}

int main() {
  int i;
  void auto_static();

  for (i = 0; i < 5; ++i)
    auto_static();

  return 0;
}
