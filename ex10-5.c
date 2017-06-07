// Exercise 10.5: findString - Check if a "pattern" character string exists inside a given "text" character string
#include <stdio.h>

int getLength(const char string[]) {
  int i, count = 0;

  for (i = 0; string[i] != '\0'; ++i)
    ++count;

  return count;
}

int findString(const char text[], const char pattern[]) {
  int getLength(const char string[]);
  int textLength, patternLength, i, j;

  textLength = getLength(text);
  patternLength = getLength(pattern);

  for (i = 0; i < textLength - patternLength; ++i) {
    j = 0;
    while (j < patternLength && text[i + j] == pattern[j])
      ++j;
    if (j == patternLength)
      return i;
  }
  
  return -1;
}

int main() {
  int getLength(const char string[]);
  int findString(const char text[], const char pattern[]);
  const char text[] = "a chatterbocx";
  const char pattern[] = "hat";

  printf("%i\n", getLength(text));
  printf("%i\n", getLength(pattern));
  printf("%i\n", findString(text, pattern));

  return 0;
}
