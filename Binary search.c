#include <stdio.h>
int main()
{
 int a[100];
 int i, first, last, mid, n, s,t; //s is the element i want to search

  printf("Enter the test case: ");
  scanf("%d",&t);

while(t--)
 {


  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
    {
    scanf("%d", &a[i]);
    }

  printf("Enter value to find: ");
  scanf("%d", &s);

  first = 0;
  last = n - 1;


  while (first <= last)
    {

    mid = (first+last)/2;

    if (a[mid] < s)
      first = mid + 1;

    else if (a[mid] == s)
        {
          printf("\n The elements position is %d.\n", mid+1);
          break;
        }
    else
      last = mid - 1;

      if (first > last)
    printf("Not found!");
  }
  printf("\n");
 }


  return 0;

}
