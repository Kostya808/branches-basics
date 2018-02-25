#include <stdio.h>

int main()
{
    int a, b, c;
    printf ("Введите первое число\n");
    scanf ("%d", &a);
    printf ("Введите второе число\n");
    scanf ("%d", &b);
    c = sum(a, b);
    printf("Сумма чисел: %d \n", c);
    return 0;
}
