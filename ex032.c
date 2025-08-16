#include<stdio.h>
int main()
{
  int i;
  printf("Decim ASCII\n");
  printf(" al\n");
  for(i=33; i<=55; i++)
  {
    printf(" %d  %c\n", i, i);
  }
  return 0;
}