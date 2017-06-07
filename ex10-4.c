// Exercise 10.4: substring - get a subset of a character string
#include <stdio.h>

void substring(const char source[], const int start, const int howMany, char result[]) {
  int i, j;

  for (i = 0, j = start - 1; i < howMany; ++i, ++j)
    result[i] = source[j];

  result[howMany] = '\0';
}

int main() {
  void substring(const char source[], const int start, const int howMany, char result[]);
  const char source[] = "The quick brown fox jumps over the lazy dog";
  char result[20];

  substring(source, 5, 15, result);
  
  printf("%s\n", result);

  return 0;
}
