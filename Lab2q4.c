#include<stdio.h>
int main() {
      int first, second, temp;
      scanf("%d", &first);
      scanf("%d", &second);
      temp = first;
      first = second;
      second = temp;
      printf("Before Swapping - %d %d\n", second,first);
      printf("After Swapping - %d %d", first,second);
      return 0;
}