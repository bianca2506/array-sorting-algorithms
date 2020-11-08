
#include <stdio.h>

void bubblesort(int v[10], int n) {
  int aux, c, d;
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (v[d] > v[d+1])
      {
        aux = v[d];
        v[d]   = v[d+1];
        v[d+1] = aux;
      }
    }
  }
}

int main()
{
  int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  printf("Sorted list in ascending order:\n");

   for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  bubblesort(array, n);
  for (c = 0; c < n; c++)
  printf("%d ", array[c]);

  return 0;
}
