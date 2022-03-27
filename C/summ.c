#include <unistd.h>
#include <stdio.h>
 
int main(void)
{
  //printf("%d\n", (1 + 100) * 100 / 2);
  int a = 1;
  int b = 0;

  while(a < 101)
  {
      b = b + a;
      a = a + 1;
      printf("%d\n",b);
  }
  return 0;
}

/*sСумма чисел от 1 до 100.*/