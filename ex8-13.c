// Exercise 8.13: Modified exchange sort algorithm
#include <stdio.h>

void sortAsc(int a[], int n) {
  int i, j, temp;

  for (i = 0; i < n-1; ++i)
    for (j = i+1; j < n; ++j)
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
}

void sortDesc(int a[], int n) {
  int i, j, temp;

  for (i = 0; i < n-1; ++i)
    for (j = i+1; j < n; ++j)
      if (a[i] < a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
}

int main() {
  int i, order;
  int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11};
  void sortAsc(int a[], int n), sortDesc(int a[], int n);

  printf("Select order for sorting (0 = ascending, 1 = descending)\n");
  scanf("%i", &order);

  printf("The array before sorting:\n");
  for (i = 0; i < 16; ++i)
    printf("%i ", array[i]);

  printf("\n");

  if (order == 0)
    sortAsc(array, 16);
  else if (order == 1)
    sortDesc(array, 16);
  else
    printf("Invalid choice\n");
  
  printf("\n\nThe array after sorting:\n");
  for (i = 0; i < 16; ++i)
    printf("%i ", array[i]);

  printf("\n");

  return 0;
}
