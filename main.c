#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>

int digit_sum(int n) {
  if (n == 0) {
    return n;
  }
  else {
    return n%10+digit_sum(n/10)
  }
}
int main(void) {
  int a = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n",a, digit_sum(a));
  return 0;
}