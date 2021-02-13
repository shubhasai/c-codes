#include <stdio.h>
int main() {
    int first, second;
    scanf("%d", &first);
    scanf("%d", &second);
    first = first - second;   
    second = first + second;
    first = second - first;
    printf("Before Swapping - %d %d\n", second,first);
    printf("After Swapping - %d %d", first,second);
    return 0;
}