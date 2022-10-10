#include <stdio.h>
int main()
{
  int first, last, mid, n, key, arr[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter value to find\n");
  scanf("%d", &key);

  first = 0;
  last = n - 1;
  mid = (first+last)/2;

  while (first <= last) {
    if (arr[mid] < key)
      first = mid + 1;
    else if (arr[mid] == key) {
      printf("%d found at location %d.\n", key, mid+1);
      break;
    }
    else
      last = mid - 1;

    mid = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", key);

  return 0;
}
