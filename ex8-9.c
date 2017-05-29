// Exercise 8.9: Least common multiple 
#include <stdio.h>

int gcd(int u, int v) {
  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}

int lcm(int u, int v) {
  int lcm;
  int gcd(int u, int v);

  if (u < 0 || v < 0)
    return -1;
  
  lcm = (u * v) / gcd(u, v);

  return lcm;
}

int main() {
  int a, b;
  int lcm(int u, int v);
  
  printf("Enter two non-negative integers: \n");
  scanf("%i%i", &a, &b);
  printf("Their least common multiple is %i\n", lcm(a, b));
  
  return 0;
}
