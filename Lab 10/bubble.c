#include <stdio.h>

int main()
{
  int array[100], n, c, d, swap;

  printf("Enter Number of Elements :-\n");
  scanf("%d", &n);

  printf("Enter %d Integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted List in Ascending Order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}