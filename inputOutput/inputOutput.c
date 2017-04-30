#include<stdio.h>

int main()
{
  int c;
  int i = 0;
  
  c = getchar();
  while (c != EOF) {
    i++; 
    putchar(c);
    printf("%d\n", i);
    c = getchar();
  }
}
