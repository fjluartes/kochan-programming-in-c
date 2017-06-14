// Exercise 10.6: removeString - Remove a specified number of characters from a character string
#include <stdio.h>

int getLength(const char string[]) {
  int i, count = 0;

  for (i = 0; string[i] != '\0'; ++i)
    ++count;

  return count;
}

void removeString(const char text[], const int start, const int howMany) {
  int getLength(const char string[]);
  int i, j;

  for (i = 0; i < start; ++i)
    printf("%c", text[i]);

  for (j = start + howMany; j < getLength(text); ++j)
    printf("%c", text[j]);

  printf("\n");
}

int main() {
  void removeString(const char text[], const int start, const int howMany);
  const char text[] = "the quick brown fox";

  removeString(text, 10, 6);
  
  return 0;
}
